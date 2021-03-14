// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
    
    if(root==NULL)
        return 0;
    int res = root->data; 
    int lres = findMax(root->left); 
    int rres = findMax(root->right); 
    if (lres > res) 
        res = lres; 
    if (rres > res) 
        res = rres; 
    return res; 
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
     if (root == NULL) 
      return INT_MAX; 
  
    int res = root->data; 
    int lres = findMin(root->left); 
    int rres = findMin(root->right); 
    if (lres < res) 
      res = lres; 
    if (rres < res) 
      res = rres; 
    return res; 

}
