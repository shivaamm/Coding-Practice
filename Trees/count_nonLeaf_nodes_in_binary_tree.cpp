int countNonLeafNodes(Node* root)
{
   if (root == NULL || (root->left == NULL && root->right == NULL)) 
        return 0; 

    return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
}

