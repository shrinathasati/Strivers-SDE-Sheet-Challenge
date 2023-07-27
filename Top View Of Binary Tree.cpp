#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> mp;
    queue<pair<TreeNode<int> *,int>> q;

    q.push({root,0});
    while(!q.empty()){
        auto data=q.front();
        q.pop();

        TreeNode<int> *temp=data.first;
        int hd=data.second;

        if(mp.find(hd)==mp.end()){
            mp[hd]=temp->val;

        }

        if(temp->left){
          q.push({temp->left, hd - 1});
        }
        if(temp->right){
          q.push({temp->right, hd + 1});
        }
    }
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}
