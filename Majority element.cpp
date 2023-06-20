#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count=0;
	if(n==1){
		return arr[0];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				if(count>n/2){
					return arr[i];
				}
				
			}
			else{
				break;
			}
		}
		
	}
	return -1;
}
