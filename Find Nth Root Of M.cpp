#include<bits/stdc++.h>
int NthRoot(int n, int m) {
  // Write your code here.
  int a=1;
  while(pow(a,n)<=m){
    if(pow(a,n)==m){
      return a;
    }
    a++;
  }
  return -1;
}
