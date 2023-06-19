#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count[3]={0,0,0};
   for(int i=0;i<n;i++){
      count[arr[i]]+=1;

   }
   int i=0;
   int j=0;
   while(i<3){
      if(count[i]>0){
         arr[j]=i;
         j++;
         count[i]--;

      }
      else{
         i++;
      }
   }
}
