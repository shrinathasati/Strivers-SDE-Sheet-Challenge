int solve(vector<int> &values,vector<int> &weights,vector<vector<int>> &dp,int n,int w){
	if(n<0){
		return 0;
	}
	if(dp[n][w]!=-1){
		return dp[n][w];
	}
	int include=0;
	if(weights[n]<=w){
		include=values[n]+solve(values,weights,dp,n-1,w-weights[n]);
	}
	int exclude=solve(values,weights,dp,n-1,w);
	return dp[n][w]=max(include,exclude);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>> dp(n,vector<int>(w+1,-1));
	return solve(values,weights,dp,n-1,w);
}
