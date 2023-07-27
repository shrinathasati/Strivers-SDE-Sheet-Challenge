#include<bits/stdc++.h>
bool iscycle(map<int,vector<int>> &adj,int node,int parent,vector<int> &vis){
    vis[node]=1;
    for(auto child:adj[node]){
        if(!vis[child]){
            if(iscycle(adj,child,node,vis)){
                return true;
            }
        }
        else if(child!=parent){
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    map<int,vector<int>> adj;
    vector<int> vis(n+1,0);

    for(int i=0;i<m;i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<n;i++){
        if(!vis[i]){
            bool ans=iscycle(adj,i,-1,vis);
            if(ans){
                return "Yes";
            }
        }
    }
    return "No";
}
