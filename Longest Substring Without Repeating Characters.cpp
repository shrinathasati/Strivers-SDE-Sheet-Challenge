#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n=input.length();
    int len=0;
    int maxl=INT_MIN;
    set<char> a;
    for(int i=0;i<n;i++){
        len=1;
        a.insert(input[i]);
        maxl=max(maxl,len);
        for(int j=i+1;j<n;j++){

            if(a.count(input[j])){
                break;
            }
            a.insert(input[j]);
            len++;
            maxl=max(maxl,len);
        }
        a.clear();
    }
    return maxl;
}
