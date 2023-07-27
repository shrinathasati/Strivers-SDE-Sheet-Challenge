#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int ans=INT_MIN;
	int m=1;
	for(int i=0;i<n;i++){
		m=m*arr[i];
		ans=max(ans,m);
		if(m==0){
			m=1;
		}
	}
	m=1;

	for(int j=n-1;j>=0;j--){
		m=m*arr[j];
		ans=max(ans,m);
		if(m==0){
			m=1;
		}
	}
	return ans;
}
