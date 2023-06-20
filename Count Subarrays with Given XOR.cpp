#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int curr;
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        curr=arr[i];
        if(curr==x){
            count++;
        }
        for(int j=i+1;j<n;j++){
            curr=curr^arr[j];
            if(curr==x){
                count++;
            }
        }
    }
    return count;
}
