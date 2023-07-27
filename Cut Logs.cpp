#include<bits/stdc++.h>
int rec(int k,int n,vector<vector<int>> &dp){
    if(n<=0 || k<=0){
        return 0;

    }
    if(k==1){
        return n;
    }
    if(n==1){
        return 1;
    }
    if(dp[n][k]!=-1){
        return dp[n][k];
    }
    int ans=INT_MAX;
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        int broken=rec(k-1,mid-1,dp);
        int notbroken=rec(k,n-mid,dp);

        int result=max(notbroken,broken);
        ans=min(result+1,ans);
        if(notbroken<broken){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    dp[n][k]=ans;
    return dp[n][k];
}

int cutLogs(int k, int n)
{
    // Write your code here.
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    return rec(k,n,dp);
}
