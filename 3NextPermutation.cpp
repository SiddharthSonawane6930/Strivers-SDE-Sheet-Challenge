#include <bits/stdc++.h>
using namespace std;

// Better Solution only using c++ STL
vector<int> nextP(vector<int> a, int n)
{
    next_permutation(a.begin(), a.end());
    return a;
}

// Most optimal solution
vector<int> nextPermutation(vector<int> &a, int n)
{
    int indx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            indx = i;
            break;
        }
    }
    if (indx == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    for (int i = n - 1; i >= indx; i--)
    {
        if (a[indx] < a[i])
        {
            swap(a[indx], a[i]);
            break;
        }
    }
    reverse(a.begin() + indx + 1, a.end());
    return a;
}

int main(){
    vector<int> a = {2,1,5,4,3,0,0};
    int n=a.size();
    vector<int> ans;
    ans = nextPermutation(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}