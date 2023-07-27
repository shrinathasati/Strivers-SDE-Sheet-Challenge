#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long s(TreeNode<int> *root, long long &ans){
    if(root==NULL){
        return 0;
    }
    long long l=s(root->left,ans);
    long long r=s(root->right,ans);

    ans=max(ans,root->val+l+r);
    return root->val+max(l,r);
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL || root->left==NULL || root->right==NULL){
        return -1;
    }
    long long ans=0;
    long long z=s(root,ans);
    return ans;
}
