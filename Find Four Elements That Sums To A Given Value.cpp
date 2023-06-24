#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int left=j+1;
            int right=n-1;
            while(left<right){
                if(arr[i]+arr[j]+arr[left]+arr[right]==target){
                    return "Yes";
                }
                else if(arr[i]+arr[j]+arr[left]+arr[right]<target){
                    left++;
                }
                else{
                    right--;
                }
            }
            
        }
    }
    return "No";
}
