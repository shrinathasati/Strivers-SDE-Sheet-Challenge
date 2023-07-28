#include <bits/stdc++.h>

void ps(vector<int> v,vector<vector<int>> &p,vector<int> &temp,int i,int n){
    p.push_back(temp);
    for(int j=i;j<n;j++){
        temp.push_back(v[j]);
        ps(v,p,temp,j+1,n);
        temp.pop_back();
    }
    
}
vector<vector<int>>pwset(vector<int>v)
{
    int n=v.size();
    vector<int> temp;
    vector<vector<int>> p;
    ps(v,p,temp,0,n);
    //Write your code here
    return p;
}
