#include<bits/stdc++.h>
bool dfs(map<int,vector<int>> &adj,int node,vector<int> &vis,vector<int> &dfsvis){
  vis[node]=1;
  dfsvis[node]=1;
  for(auto child:adj[node]){
    if(!vis[child]){
      if(dfs(adj,child,vis,dfsvis)){
        return true;
      }
    }
    else if(dfsvis[child]){
      return true;
    }
  }
  dfsvis[node]=0;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  map<int,vector<int>> adj;
  vector<int> vis(n+1,0);
  vector<int> dfsvis(n+1,0);
  for(int i=0;i<edges.size();i++){
    adj[edges[i].first].push_back(edges[i].second);
  }

  for(int i=1;i<n;i++){
    if(!vis[i]){
      bool ans=dfs(adj,i,vis,dfsvis);
      if(ans){
        return true;
      }
    }
  }
  return false;
}
