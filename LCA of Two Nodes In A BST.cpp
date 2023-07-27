#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    
    if(root==NULL){
        return NULL;
        
    }
    
    if(root->data==P->data || root->data==Q->data){
        return root;
    }
    TreeNode<int>* left=LCAinaBST(root->left,P,Q);
    TreeNode<int>* right=LCAinaBST(root->right,P,Q);
    
    if(left!=NULL && right!=NULL){
        return root;
    }
    else if(left!=NULL && right==NULL){
        return left;
    }
    else if(left==NULL && right!=NULL){
        return right;
    }
    else{
        return NULL;
    }
}
