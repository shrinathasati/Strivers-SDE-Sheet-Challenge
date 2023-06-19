#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> b(m+n);
	int i=0,j=0,k=0;
	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
			b[k]=arr1[i];
			i++;
			k++;
		}
		else{
			b[k]=arr2[j];
			j++;
			k++;

		}
	}
	while(i<m){
		b[k]=arr1[i];
		i++;
		k++;
	}
	while(j<n){
		b[k]=arr2[j];
		j++;
		k++;
	}
	return b;
}
