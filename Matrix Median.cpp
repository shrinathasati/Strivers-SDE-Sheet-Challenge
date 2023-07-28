#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    // int n=matrix.size();
    // int m=matrix[0].size();
    // vector<int> list;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         list.push_back(matrix[i][j]);
    //     }
    // }
    // sort(list.begin(),list.end());
    // int mid=list.size()/2;

    // return list[mid];

    int n=matrix.size();
    int m=matrix[0].size();
    int size=n*m;
    int i=0,j=0;
    vector<int> list;
    for(int k=0;k<size;k++){
        i=k/n;
        j=k%m;
        list.push_back(matrix[i][j]);
    }
    sort(list.begin(),list.end());
    int mid=list.size()/2;
    return list[mid];
}
