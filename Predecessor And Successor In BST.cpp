#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<int> &ans)
{
    if(root!=NULL){
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.

    if(root==NULL){
        return {};
    }
    vector<int> ans;
    inorder(root,ans);
    int n=ans.size();
    pair<int,int> p;
    int k;
    for(int i=0;i<n;i++){
        if(ans[i]==key){
            k=i;
            break;
        }
    }
    if(k==0){
        p.first=-1;
    }
    else{
        p.first=ans[k-1];
    }
    if(k==n-1){
        p.second=-1;
    }
    else{
        p.second=ans[k+1];
    }
    return p;

}
