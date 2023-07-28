#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	stack<string> s;
	int l=str.size();
	string a;
	for(int i=0;i<l;i++){
		if(str[i]!=' '){
			a+=str[i];
		}
		if(str[i]==' ' || i==l-1){
			if(a.length()!=0){
				s.push(a);
				a.clear();
			}
		}
	}
	string ans;
	while(!s.empty()){
		ans+=s.top();
		s.pop();
		if(s.size()!=0){
			ans+=' ';
		}
	}
	return ans;

}
