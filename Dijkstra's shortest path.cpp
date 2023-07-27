#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    vector<int> dis(vertices,INT_MAX);
    vector<pair<int,int>> adj[vertices];
    for(auto i:vec){
        adj[i[0]].push_back({i[1],i[2]});
        adj[i[1]].push_back({i[0],i[2]});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    dis[source]=0;

    pq.push({0,source});

    while(!pq.empty()){
        int dist=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        for(auto a: adj[node]){
            int new_dist=a.second;
            int adjnode=a.first;

            if(dist+new_dist<dis[adjnode]){
                dis[adjnode]=dist+new_dist;
                pq.push({dis[adjnode],adjnode});

            }
        }
    }
    return dis;
}
