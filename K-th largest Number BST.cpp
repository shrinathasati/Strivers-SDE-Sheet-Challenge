void rec(TreeNode<int>*root,int& k,int &cnt,int &ans)
{
   if (root==NULL) return ;
   rec(root->right,k,cnt,ans);
   cnt++;
   if (cnt==k) ans=root->data;
   rec(root->left,k,cnt,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    int ans=-1;
    int cnt=0;
    rec(root,k,cnt,ans);
    return ans;
}
