#include <bits/stdc++.h>
using namespace std;

// BruteForceApproch
// Take an ans matrix and just insert first row into last col 
// and second row into second last column and so on
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   vector<vector<int>> ans;
   for(int i=0;i<n;i++){
       for(int j = 0;j<m;j++){
           ans[j][n-1-i] = mat[i][j];
       }
   }
 
}

// Optimal Solution
// 1. Transpose the Matrix (means just swapping columns to rows and rows to columns)
// 2.reverse each row


void rotateMatrix2(vector<vector<int>> &mat, int n, int m)
{
   for(int i=0;i<n-1;i++){
       for(int j = i+1;j<n;j++){
           swap(mat[i][j],mat[j][i]);
       }
   }
   for(int i=0;i<n;i++){
       reverse(mat[i].begin(),mat[i].end());
   }
}