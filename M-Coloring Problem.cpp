int possible(vector<vector<int>> mat,vector<int> col,int i,int size,int node){
    for(int j=0;j<size;j++){
        if(mat[node][j]==1 && col[j]==i){
            return 0;
        }
    }
    return 1;


}


int solve(vector<vector<int>> mat,vector<int> col,int size,int m,int node){
    if(node==size){
        return 1;
    }

    for(int i=1;i<=m;i++){
        if(possible(mat,col,i,size,node)){
            col[node]=i;
            if(solve(mat,col,size,m,node+1)){
                return 1;
            }
            col[node]=0;
        }

    }
    return 0;

}






string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here


    int size=mat.size();
    int node=0;
    vector<int> col(size,0);
    if(solve(mat,col,size,m,node)){
        return "YES";
    }
    else{
        return "NO";
    }
}
