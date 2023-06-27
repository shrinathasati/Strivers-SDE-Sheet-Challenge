#include <bits/stdc++.h> 
void subset(vector<int> &arr,vector<vector<int>> &res,vector<int> &sub,int i){
    if(i == arr.size()){
        return ;
    }

    sub.push_back(arr[i]);
    res.push_back(sub);
    subset(arr,res,sub,i+1);
    while(i < arr.size() - 1 && arr[i] == arr[i+1])i++;
    sub.pop_back();
    subset(arr,res,sub,i+1);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    vector<int> sub;
    subset(arr,res,sub,0);
    return res;
}
