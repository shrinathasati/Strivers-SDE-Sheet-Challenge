#include <bits/stdc++.h>
vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
  // Write your code here
    vector<vector<int>> adj(vertex);
    for (int i = 0; i < edges.size(); i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    for(int i =0;i<vertex ;i++){
        sort( adj[i].begin() , adj[i].end() ) ;
    }
    vector<int> vis(vertex,0);
    queue<int> q;
    q.push(0);
    vis[0]=1;
    vector<int> ans;
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        ans.push_back(it);
        for(auto child:adj[it]){
            if(vis[child]==0){
                vis[child]=1;
            q.push(child);
            }
        }
    }
    for(int i=0;i<vis.size();i++){
        if(vis[i]==0) ans.push_back(i);
    }
    return ans;
    
}
