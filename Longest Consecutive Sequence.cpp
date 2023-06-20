#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int max_length=INT_MIN;
    int length=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            length++;
        }
        else if(arr[i+1]==arr[i]){
            length=length;
        }
        else{
            max_length=max(max_length,length);
            length=1;
        }
    }
    max_length=max(max_length,length);
    return max_length;
}
