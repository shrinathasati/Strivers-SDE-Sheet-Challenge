int dfs(BinaryTreeNode<int>* node){
    if(node){
        int sum = 0;
        sum += dfs(node->left);
        sum += dfs(node->right);
        if (!sum) {
            sum = 1e6;
        }
        node->data = sum;
        return sum;
    }else{
        return 0;
    }
}
void changeTree(BinaryTreeNode<int>* root) {
    dfs(root);
}
