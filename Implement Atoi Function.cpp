#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int sign=0;
    if(str[0]=='-'){
        sign=1;
    }
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            ans=ans*10+(str[i]-'0');
        }
    }
    if(sign==1){
        return -ans;
    }
    return ans;


}
