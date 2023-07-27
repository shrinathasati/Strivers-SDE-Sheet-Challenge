vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	int n=text.size();
	int m=pattern.size();

	vector<int> ans;

	for(int i=0;i<n-m+1;i++){
		if(text[i]==pattern[0]){
			string str=text.substr(i,m);
			if(str==pattern){
				ans.push_back(i+1);
			}
		}
	}
	return ans;
}
