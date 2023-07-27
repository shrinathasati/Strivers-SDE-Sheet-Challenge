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
int height(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    if(root==NULL){
        return 0;
    }
    int o1,o2,o3;
    o1=height(root->left)+height(root->right);
    o2=diameterOfBinaryTree(root->left);
    o3=diameterOfBinaryTree(root->right);
    return max(o1,max(o2,o3));
}
