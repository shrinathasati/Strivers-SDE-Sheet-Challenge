#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int K)
{
	priority_queue<int ,vector<int>,greater<int>>pq;
	for(auto ele:arr){
		pq.push(ele);
		if(pq.size()>K)pq.pop();
	}
	return pq.top();
}
