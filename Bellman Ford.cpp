#include <bits/stdc++.h>

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {

// Write your code here.

vector<int>dis(n+1,1e9);

dis[src]=0;

for(int i=1;i<=n-1;i++){

for(auto it:edges){

int u=it[0];

int v=it[1];

int wt=it[2];

if(dis[u]!=1e9 and dis[u]+wt<dis[v]){

dis[v]=dis[u]+wt;

}

}

}

return dis[dest];

}

