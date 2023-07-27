#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root!=NULL){
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return true;
        
    }
    vector<int> ans;
    inorder(root,ans);
    vector<int> ans1=ans;
    sort(ans1.begin(),ans1.end());
    
    bool out=true;
    for(int i=0;i<ans.size();i++){
        if(ans1[i]!=ans[i]){
            out=false;
            break;
        }
    }
    return out;
}
