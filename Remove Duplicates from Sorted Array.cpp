int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	vector<int> v;
	v.push_back(arr[0]);
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			v.push_back(arr[i]);
		}
	}
	return v.size();
}
