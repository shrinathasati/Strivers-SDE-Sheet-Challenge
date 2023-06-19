bool binary(vector<int> a,int n,int target){
    int low=0;
    int high=n-1;
    int mid;
    int k=target;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==k){
            return true;
        }
        if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}






bool searchMatrix(vector<vector<int>>& mat, int target) {
    bool ans=false;
    int m=mat.size();
    int n=mat[0].size();
    for(int i=0;i<m;i++){
        if(mat[i][0]<=target && target<=mat[i][n-1]){
            ans=binary(mat[i],n,target);
            break;
        }
    }
    return ans;
}
