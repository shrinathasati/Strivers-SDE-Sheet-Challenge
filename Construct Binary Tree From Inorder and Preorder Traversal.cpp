#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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
// int bs(vector<int> inorder,int ins,int ine,int ele){
//     int low=ins;
//     int high=ine;
//     int mid;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(inorder[mid]==ele){
//             return mid;

//         }
//         else if(inorder[mid]>ele){
//             high=mid-1;

//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return -1;
// }
int pre=0;
TreeNode<int>* solve(vector<int> &inorder, vector<int> &preorder,int ins, int ine){
    if(ins>ine){
        return NULL;

    }
    TreeNode<int>* root=new TreeNode<int>(preorder[pre++]);

    // int k=bs(inorder,ins,ine,root->data);
    int k;
    for(int i=ins;i<=ine;i++){
        if(inorder[i]==root->data){
            k=i;
            break;
        }
    }
    root->left=solve(inorder,preorder,ins,k-1);
    root->right=solve(inorder,preorder,k+1,ine);
    return root;

}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    pre=0;
    int ins=0;
    int ine=inorder.size()-1;

    return solve(inorder,preorder,ins,ine);
}
