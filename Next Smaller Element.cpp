#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans(n,-1);
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty()){
            if(s.top()<arr[i]){
                ans[i]=s.top();
                break;
            }
            s.pop();
        }
        s.push(arr[i]);
    }
    return ans;
}
