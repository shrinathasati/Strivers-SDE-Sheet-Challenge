#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<str1.size();i++){
        arr1.push_back(str1[i]);
        arr2.push_back(str2[i]);
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    if(arr1==arr2){
        return true;
    }
    return false;
}
