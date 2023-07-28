#include<bits/stdc++.h>
using namespace std;
int findCelebrity(int n) {

	stack<int> st;

 	for(int i=0;i<n;i++){
		 st.push(i);
	}

	// finding potential celebrity candidate
	while(st.size() > 1){
		int a = st.top();
		st.pop();
		int b = st.top();
		st.pop();

		if(knows(a, b)){
			st.push(b);
		}else{
			st.push(a);
		}
	}
	int celeb = st.top(); // potential celebrity

	// finding that the potential cnadidate is celebrity or not
	for(int i=0;i<n;i++){
		if(i != celeb){
			if(knows(celeb, i)){
				return -1;
			}

			if(!knows(i, celeb)){
				return -1;
			}
		}
	}

	return celeb;
}
