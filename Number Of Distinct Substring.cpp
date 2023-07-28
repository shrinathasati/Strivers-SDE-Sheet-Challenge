#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    //  Write your code here.
    set<string> a;
    int len=word.length();
    for(int i=0;i<len;i++){
        for(int j=len-i;j>=1;j--){
            
            if(!a.count(word.substr(i,j))){
                a.insert(word.substr(i,j));
            }
        }
    }
    int ans=a.size();
    a.clear();
    return ans;
}
