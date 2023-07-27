#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void preorder(TreeNode<int> *root,vector<int> &ans){
    if(root!=NULL){
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }

}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL){
        return NULL;
    }
    vector<int> ans;
    preorder(root,ans);

    TreeNode<int> *head=new TreeNode<int>(ans[0]);
    head->left=NULL;
    head->right=NULL;
    TreeNode<int> *temp=head;
    for(int i=1;i<ans.size();i++){
        TreeNode<int> *newnode=new TreeNode<int>(ans[i]);
        newnode->left=NULL;
        newnode->right=NULL;
        temp->right=newnode;
        temp=newnode;
        
    }
    return head;


}
