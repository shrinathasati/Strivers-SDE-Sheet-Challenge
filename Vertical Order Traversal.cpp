#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    vector<pair<pair<int,int>,int>> mp;
    queue<pair<TreeNode<int> *,int>> q;

    q.push({root,0});
    int i=0;
    while(!q.empty()){
        auto val=q.front();
        q.pop();

        TreeNode<int> *temp=val.first;
        int hd=val.second;

        mp.push_back({{hd, i++}, temp->data});
        if(temp->left){
            q.push({temp->left,hd-1});

        }
        if(temp->right){
            q.push({temp->right,hd+1});
        }

    }

    sort(mp.begin(),mp.end());
    for(auto val:mp){
        ans.push_back(val.second);
    }
    return ans;


}
