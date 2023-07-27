#include<bits/stdc++.h>
bool solve(vector<vector<int>> &edges,int node,vector<int> &color){
	queue<int> q;
	q.push(node);

	color[node]=0;
	while(!q.empty()){
		int i=q.front();
		q.pop();
		for(int j=0;j<edges.size();j++){
			if(edges[i][j]){
				if(color[j]==-1){
					color[j]=!color[i];
					q.push(j);
				}
				else if(color[j]==color[i]){
					return false;
				}
			}
		}
	}
	return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.

	vector<int> color(edges.size(),-1);
	for(int i=0;i<edges.size();i++){
		if(color[i]==-1){
			if(!solve(edges,i,color)){
				return false;
			}
		}
	}
	return true;
}
