#include <bits/stdc++.h>
#include<string> 
bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
    set<string> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int i=0;
    int index=-1;
    string temp="";
    while(i<target.length()){
        temp+=target[i];
        if(s.find(temp)!=s.end()){
            index=i;
            temp="";
        }
        i++;
    }
    if(index==target.length()-1){
        return true;
    }
    return false;
}
