#include<bits/stdc++.h>
using namespace std;
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
	sort(arr.begin(),arr.end());
	int q=queries.size();
	int a=arr.size();
	vector<int> out(q,-1);

	for(int i=0;i<q;i++){
		int ans=INT_MIN;
		for(int j=0;j<a;j++){
			if(arr[j]<=queries[i][1]){
				ans=max(ans,(queries[i][0]^arr[j]));
			}
			else{
				break;
			}
		}
		if(ans!=INT_MIN){
			out[i]=ans;
		}
	}
	return out;
}
