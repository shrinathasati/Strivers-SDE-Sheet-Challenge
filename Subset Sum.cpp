#include<bits/stdc++.h>
void solve(vector<int> &num,vector<int> &ans,int i,int sum){
	sum+=num[i];
	ans.push_back(sum);

	for(int j=i+1;j<num.size();j++){
		solve(num,ans,j,sum);
	}
	sum-=num[i];
}



vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ans;
	int n=num.size();
	ans.push_back(0);
	for(int i=0;i<n;i++){
		solve(num,ans,i,0);
	}
	sort(ans.begin(),ans.end());
	return ans;
	
}
