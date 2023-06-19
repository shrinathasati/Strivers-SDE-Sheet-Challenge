#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> next=permutation;
    int i=n-2;
    int j=n-1;


    while(i>=0 && next[i+1]<next[i]){
        i--;

    }

    if(i<0){
        reverse(next.begin(),next.end());
    }
    else{
        while(j>=0 && next[i]>next[j]){
            j--;
        }
        swap(next[i],next[j]);
        reverse(next.begin()+i+1,next.end());
    }
    return next;

}
