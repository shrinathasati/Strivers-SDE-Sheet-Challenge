#include <map>
bool isSafe(int row, int col, map<int,bool> &mppCol, 
map<int,bool> &mppLUD, map<int,bool> &mppRUD){
    if(mppCol[col] || mppLUD[row - col] || mppRUD[row + col]){
        return false;
    }
    return true;
}

void addUtils(vector<vector<int>> &ans, vector<vector<int>> &temp){
    vector<int> config;

    for(vector<int> v: temp){
        for(int x: v){
            config.push_back(x);
        }
    }
    ans.push_back(config);
}

void solve(int row, int n, vector<vector<int>> &temp, 
vector<vector<int>> &ans, map<int,bool> &mppCol, 
map<int,bool> &mppRUD, map<int,bool> &mppLUD){
    if(row == n){
        addUtils(ans, temp);
        return;
    }

    for(int col = 0;col<n;col++){
        if(isSafe(row, col, mppCol, mppLUD, mppRUD)){
            mppCol[col] = true;
            mppLUD[row - col] = true;
            mppRUD[row + col] = true;
            temp[row][col] = 1;
            solve(row + 1, n, temp, ans, mppCol, mppRUD, mppLUD);
            mppCol[col] = false;
            mppLUD[row - col] = false;
            mppRUD[row + col] = false;
            temp[row][col] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> ans;
    map<int,bool> mppCol, mppRUD, mppLUD;
    vector<vector<int>> temp(n, vector<int> (n, 0));
    solve(0, n, temp, ans, mppCol, mppRUD, mppLUD);
    return ans;
}
