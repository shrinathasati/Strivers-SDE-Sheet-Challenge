bool solve(BinaryTreeNode<int>*root1,BinaryTreeNode<int>*root2){

    if(root1==NULL||root2==NULL)return true;

 

   if(root1->data != root2->data){

        return false;

    }

 

   

       return solve(root1->left,root2->right)&&solve(root1->right,root2->left);

    

 

    

}

 

bool isSymmetric(BinaryTreeNode<int>* root)

{

    if(root==NULL)return true;

    

   return solve(root->left,root->right)  ;

}
