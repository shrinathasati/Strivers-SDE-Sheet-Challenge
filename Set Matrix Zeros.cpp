#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int N=matrix.size();
	int M=matrix[0].size();
	vector<int> row(N,-1);
	vector<int> column(M,-1);
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(matrix[i][j]==0){
				row[i]=0;
				column[j]=0;

			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(row[i]==0||column[j]==0){
				matrix[i][j]=0;
			}
		}
	}
	

}
