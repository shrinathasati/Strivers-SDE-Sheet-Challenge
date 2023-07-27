#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void lefttrav(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        lefttrav(root->left,ans);
    }
    else{
        lefttrav(root->right,ans);
    }
}
void righttrav(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->right){
        righttrav(root->right,ans);
    }
    else{
        righttrav(root->left,ans);
    }
    ans.push_back(root->data);
}
void leaftrav(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    leaftrav(root->left,ans);
    leaftrav(root->right,ans);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->data);
    lefttrav(root->left,ans);

    leaftrav(root->left,ans);
    leaftrav(root->right,ans);

    righttrav(root->right,ans);
    return ans;
}
