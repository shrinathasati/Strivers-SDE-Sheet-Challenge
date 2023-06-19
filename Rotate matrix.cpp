#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int left=0,right=m-1;
    int top=0,bottom=n-1;

    while(left<right && top<bottom){
        int temp=mat[top][left];
        for(int i=left+1;i<=right;i++){
            int k=mat[top][i];
            mat[top][i]=temp;
            temp=k;
        }

        top++;

        for(int j=top;j<=bottom;j++){
            int k=mat[j][right];
            mat[j][right]=temp;
            temp=k;

        }

        right--;

        for(int i=right;i>=left;i--){
            int k=mat[bottom][i];
            mat[bottom][i]=temp;
            temp=k;

        }

        bottom--;


        for(int j=bottom;j>=top;j--){
            int k=mat[j][left];
            mat[j][left]=temp;
            temp=k;
        }

        left++;
        

        mat[top-1][left-1]=temp;

    }

}
