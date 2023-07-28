#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int> ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ans.push_back(a[i]+b[j]);
		}
	}
	sort(ans.begin(),ans.end(),greater<int>());
	vector<int> out;
	for(int i=0;i<k;i++){
		out.push_back(ans[i]);
	}
	return out;
}
