void help(TreeNode<int> *root, int &k,int &res)
{
    if(root==NULL)
        return;
    help(root->left,k,res);
    if(k!=0)
    {
        k--;
        res=root->data;
    }
    help(root->right,k,res);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int res=0;
    help(root,k,res);
    return res;
}
