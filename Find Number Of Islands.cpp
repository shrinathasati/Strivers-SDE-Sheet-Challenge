bool isValid(int row,int col,int n,int m)
{
   return row>=0 && col>=0 && row<n && col<m;
}

void dfs(int**arr,int row,int col,int n,int m,vector<vector<int>> &vis){
   vis[row][col]=1;
    for (int i=-1;i<=1;i++)
    {
       for (int j=-1;j<=1;j++)
       {
          int newRow=row+i;
          int newCol=col+j;
          if (isValid(newRow,newCol,n,m) && vis[newRow][newCol]==0 && arr[newRow][newCol]==1)
          {
             dfs(arr,newRow,newCol,n,m,vis);
          }
       }
    }
   
}



int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
   int ans=0;
  vector<vector<int>>vis(n,vector<int>(m,0));
   for (int i=0;i<n;i++)
   {
      for (int j=0;j<m;j++)
      {
         if (arr[i][j]==1 && vis[i][j]==0)
         {
            ans++;
            dfs(arr,i,j,n,m,vis);
         }
      }
   }
   return ans;

}
