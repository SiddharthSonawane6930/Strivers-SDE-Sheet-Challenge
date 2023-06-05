
// Solution For BruteForce Approch

#include <bits/stdc++.h>
using namespace std;
/*
class solution
{
// BruteForece Solution
public:
    int m = 4, n = 4;
    int arr[4][4] = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 1}};

    void setRow(int i)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0 ){
                arr[i][j] = -1;
            }
        }
    }
    void setCol(int j)
    {
        for (int i = 0; i < m; i++)
        {
            if (arr[i][j] != 0 ){
                arr[i][j] = -1;
            }
        }
    }

    void setZero(int arr[][4], int m, int n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0)
                {
                    setRow(i);
                    setCol(j);
                }
            }
        }
    }
    void print(){
        setZero(arr,m,n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i][j]==-1){
                    arr[i][j]=0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
};
*/

class solution{
// Better Solution
   public:
   int m = 4, n = 4;
   int row[4],col[4];
    int arr[4][4] = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 1}};

    void setZero(){
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
         for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i]==1 or col[j]==1)
                {
                    arr[i][j]=0;
                }
            }
        }
    }
    void print(){
        setZero();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
};


int main()
{
    solution s ;
    s.print();
    return 0;
}