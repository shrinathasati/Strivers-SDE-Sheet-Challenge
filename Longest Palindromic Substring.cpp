#include<bits/stdc++.h>
using namespace std;
string check(string s,int i,int j){
    int n=s.length();
    while (i>=0 and j<n){
        if(s[i]!=s[j]){
            break;
        }
        i-=1;
        j+=1;
    }
    return s.substr(i+1,j-i-1);
}
string longestPalinSubstring(string str)
{
    // Write your code here.
    int n=str.length();
    string ans;
    for(int i=0;i<n;i++){
        string odd=check(str,i,i);
        if(odd.length()>ans.length()){
            ans=odd;
        }
    }
    for(int i=0;i<n;i++){
        string even=check(str,i,i+1);
        if(even.length()>ans.length()){
            ans=even;
        }
    }
    return ans;
}
