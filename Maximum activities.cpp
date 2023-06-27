#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> p;
    for(int i=0;i<start.size();i++){
        p.push_back({finish[i],start[i]});

    }
    sort(p.begin(),p.end());
    int ans=0;
    int a=-1;
    for(auto val: p){
        if(val.second>=a){
            ans++;
            a=val.first;
        }
    }
    return ans;
}
