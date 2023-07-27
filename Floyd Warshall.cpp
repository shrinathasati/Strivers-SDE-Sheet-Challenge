int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                matrix[i][j]=0;
            }
            else{

            matrix[i][j]=1e9;
            }
        }
    }
    for(auto it: edges){
        int u=it[0]-1;
        int v=it[1]-1;

        int w=it[2];
        matrix[u][v]=w;

    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][k]!=1e9 && matrix[k][j]!=1e9){
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }
    }
    return matrix[src-1][dest-1];

}
