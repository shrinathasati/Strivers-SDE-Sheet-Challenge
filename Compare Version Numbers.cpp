#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    // Write your code here
    int i=0;
    
    int j=0;
    

    while(i<a.size() or j<b.size()){
        if(a[i]=='0'){
            while(i<a.size() && a[i]=='0'){
                i++;
            }
        }
        if(b[j]=='0'){
            while(j<b.size() && b[j]=='0'){
                j++;
            }
        }
        long x=0;
        long y=0;
        while(i<a.size()&& a[i]!='.'){
            x=x*10+(a[i]-'0');
            i++;
        }
        while(j<b.size()&& b[j]!='.'){
            y=y*10+(b[j]-'0');
            j++;
        }
        if(x>y){
            return 1;
        }
        else if(x<y){
            return -1;
        }

i++;
j++;
    }
    return 0;
    
}
