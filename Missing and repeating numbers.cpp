#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	vector<int>count(n+1,0);
	sort(arr.begin(),arr.end());
	int R=0;
	int M=0;
	for(int i=0;i<arr.size()-1;i++){
		count[arr[i]]+=1;
		if(arr[i]==arr[i+1]){
			R=arr[i];
			
		}
	}
	count[arr.size()-1]+=1;
	for(int i=1;i<=n;i++){
		if(count[i]==0){
			M=i;
			break;
		}
	}
	return {M,R};
	
}
