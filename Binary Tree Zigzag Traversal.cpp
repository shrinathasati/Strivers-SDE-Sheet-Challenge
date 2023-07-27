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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    bool level=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> temp(size);
        for(int i=0;i<size;i++){

            BinaryTreeNode<int> *val=q.front();
            
            q.pop();
            if(level){
                temp[i]=val->data;
            }
            else{
                temp[size-i-1]=val->data;
            }
            if(val->left){
                q.push(val->left);
            }
            if(val->right){
                q.push(val->right);
            }
        }
        for(auto it: temp){
            ans.push_back(it);
        }
        level=!level;
            
        
        
    }
    return ans;
}

