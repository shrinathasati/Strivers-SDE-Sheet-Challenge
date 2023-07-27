#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode< int > *> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        while(size--){
            BinaryTreeNode< int > *temp=q.front();
            q.pop();

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            if(size==0){
                temp->next=NULL;
            }
            else{
                temp->next=q.front();
            }
        }
    }
}
