#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &edges)
{
    // Write your code here.
    unordered_map<int,vector<pair<int,int>>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first.first;
        int v=edges[i].first.second;

        int w=edges[i].second;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> vis(n+1,0);

    priority_queue<
    pair<pair<int,int>,int>,
    vector<pair<pair<int,int>,int>>,
    greater<pair<pair<int,int>,int>>
    > pq;
    vector<pair<pair<int,int>,int>> result;
    pq.push({{0,1},-1});

    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();

        int wt=it.first.first;
        int node=it.first.second;
        int pt=it.second;

        if(vis[node]==1){
            continue;
        }

        vis[node]=1;

        if(pt!=-1){
            result.push_back({{pt,node},wt});
        }

        for(auto neigh:adj[node]){
            int adjnode=neigh.first;
            int adjwt=neigh.second;

            int adjpt=node;

            if(!vis[adjnode]){
                pq.push({{adjwt,adjnode},node});
            }
        }
    }
    return result;
}

