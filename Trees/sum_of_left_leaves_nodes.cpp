int leftLeavesSum(Node *root)
{
    if(root==NULL)
   {
       return 0;
   }
   if(root->left!=NULL)
   {
       if(root->left->left==NULL&&root->left->right==NULL)
       {
           return  root->left->data + leftLeavesSum(root->right);
       }
   }
   return leftLeavesSum(root->left)+leftLeavesSum(root->right);
}
