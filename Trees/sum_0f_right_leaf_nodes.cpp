int rightLeafSum(Node* root)
{
    if(root==NULL)
   {
       return 0;
   }
   if(root->right!=NULL)
   {
       if(root->right->left==NULL&&root->right->right==NULL)
       {
           return  root->right->data + rightLeafSum(root->left);
       }
   }
   return rightLeafSum(root->left)+rightLeafSum(root->right);
}
