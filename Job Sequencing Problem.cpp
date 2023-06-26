#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int dead=0;
    
    vector<pair<int,int>> p;
    for(int i=0;i<jobs.size();i++){
        p.push_back({jobs[i][1],jobs[i][0]});
        dead=max(dead,jobs[i][0]);
    }
    sort(p.begin(),p.end());
    int n=p.size();
    int profit=0;
    vector<int> ans(dead+1,-1);
    for(int i=n-1;i>=0;i--){
        auto val=p[i];
        for(int k=val.second;k>0;k--){
            if(ans[k]==-1){
                profit+=val.first;
                ans[k]=1;
                break;
            }
        }
    }
    
    return profit;
}
