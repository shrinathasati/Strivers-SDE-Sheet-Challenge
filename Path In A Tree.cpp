#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
void searchPath(TreeNode<int> *root,int x,vector<int> &ans){
	if(root==NULL){
		return;
	}
	ans.push_back(root->data);
	if(x==root->data){
		return;
	}
	searchPath(root->left, x, ans);
	searchPath(root->right, x, ans);
	if(ans[ans.size()-1]!=x){
		ans.pop_back();
	}
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	if(root==NULL){
		return ans;
	}
	searchPath(root, x, ans);
	return ans;
}
