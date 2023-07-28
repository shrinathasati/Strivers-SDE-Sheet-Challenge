#include <bits/stdc++.h> 
void solve(vector<vector<int> > &maze,
vector<vector<int>> &ans,vector<int> &temp,vector<vector<int>> &vis, int row,int col,int n){
  if(row==n-1 && col==n-1){
    ans.push_back(temp);
    return;
  }

  int dx[4]={0,0,1,-1};
  int dy[4]={1,-1,0,0};

  for(int i=0;i<4;i++){
    int n_row=row+dx[i];
    int n_col=col+dy[i];

    if(n_row>=0 && n_col>=0 && n_row<n && n_col<n && vis[n_row][n_col]==0 && maze[n_row][n_col]==1){
      vis[n_row][n_col]=1;
      temp[n*n_row+n_col]=1;

      solve(maze,ans,temp,vis,n_row,n_col,n);

      vis[n_row][n_col]=0;
      temp[n*n_row+n_col]=0;    

    }
  }
  return;


}



vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.

  vector<int> temp(n*n,0);
  vector<vector<int>> ans;
  vector<vector<int>> vis(n,vector<int>(n,0));
  int row=0;
  int col=0;
  vis[0][0]=1;
  temp[0]=1;
  solve(maze,ans,temp,vis,row,col,n);

  return ans;
}
