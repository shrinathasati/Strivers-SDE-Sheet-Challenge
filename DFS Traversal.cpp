void dfs(unordered_map<int,vector<int>> &adj,vector<vector<int>> &ans,
        unordered_map<int,bool> &vis,int node){

    stack<int> s;
    s.push(node);
    vector<int> temp;
    vis[node]=true;

    while(!s.empty()){
        int top=s.top();
        s.pop();

        temp.push_back(top);

        for(auto i: adj[top]){
            if(!vis[i]){
                s.push(i);
                vis[i]=true;
            }
        }


    }
    ans.push_back(temp);
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,vector<int>> adj;
    vector<vector<int>> ans;

    unordered_map<int,bool> vis;

    for(int i=0;i<E;i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(adj,ans,vis,i);
            vis[i]=true;
        }
    }
    return ans;
}
