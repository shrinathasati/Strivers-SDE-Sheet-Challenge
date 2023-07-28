bool cmp(pair<int, int>& a,
        pair<int, int>& b)
{
    return a.second > b.second;
}
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]+=1;

    }
    vector<pair<int, int> > A;
    for (auto& it : m) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    vector<int> ans;
    for(int i=0;i<k;i++){
        auto val=A[i];
        ans.push_back(val.first);

    }
    return ans;
}
