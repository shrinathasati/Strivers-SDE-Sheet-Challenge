int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
	int ans=0;
	for(int i=0;i<n-m+1;i++){
		if(s[i]==p[0]){
			string str=s.substr(i,m);
			if(str==p){
				ans++;
			}
		}
	}
	return ans;
}
