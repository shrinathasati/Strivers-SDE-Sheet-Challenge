#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int> *solve(vector<int> &preorder,int min,int max,int &i){
    if(i>=preorder.size()){
        return NULL;
    }
    if(preorder[i]<min|| preorder[i]>max){
        return NULL;

    }

    TreeNode<int> *root=new TreeNode<int>(preorder[i++]);

    root->left=solve(preorder,min,root->data,i);
    root->right=solve(preorder,root->data,max,i);

    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int i=0;
    return solve(preOrder,INT_MIN,INT_MAX,i);
    
}
