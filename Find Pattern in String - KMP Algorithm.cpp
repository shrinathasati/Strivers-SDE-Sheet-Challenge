#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
    // Write your code here.
    int m=p.length();
    int n=s.length();

    bool ans=false;
    for(int i=0;i<n-m+1;i++){
        if(s[i]==p[0]){
            string str=s.substr(i,m);
            if(p==str){
                ans=true;
                return ans;
            }
        }
    }
    return ans;
}
