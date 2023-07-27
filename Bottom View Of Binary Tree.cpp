#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> bm;
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto temp=q.front();
        q.pop();

        BinaryTreeNode<int>* fn=temp.first;
        int hd=temp.second;
        bm[hd]=fn->data;
        if(fn->left){
          q.push({fn->left, hd - 1});
        }
        if(fn->right){
          q.push({fn->right, hd + 1});
        }
    }
    for(auto i:bm){
        ans.push_back(i.second);
    }
    return ans;
    
}
