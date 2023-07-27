#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
int val;
void f(BinaryTreeNode<int> *node, int x){
    if(!node) return ;
    if(node->data==x)  val=node->data;
    if(node->data<x){
        return f(node->right,x);
    }
    if(node->data>x){
        val= node->data;
        return f(node->left,x);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    val=-1;
    f(node,x);
    return val;
    
}
