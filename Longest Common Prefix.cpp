string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    int size=arr[0].size();
    string str="";
    for(int i=0;i<size;i++){
        for(int j=1;j<n;j++){
            if(arr[j].size()<=i){
                return str;
            }
            else{
                if(arr[0][i]!=arr[j][i]){
                    return str;
                }
            }
        }
        str+=arr[0][i];
    }
    return str;
    
}


