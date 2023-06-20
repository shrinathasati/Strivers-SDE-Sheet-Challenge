#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    vector<int> ans;
    map<int,int> count;
    vector<int> unique;
    for(auto it: arr){
        if(count[it]==0){
            unique.push_back(it);
        }
        count[it]++;
    }
    for(auto it: unique){
        if(count[it]>n/3){
            ans.push_back(it);
        }
    }
    return ans;
}
