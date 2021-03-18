// A recursive function to find depth of the deepest odd level leaf
int depthOfOddLeafUtil(struct Node *root,int level)
{
    // if(root==NULL)
    // {
    //     return 0;
    // }
    // if(root->left==NULL && root->right==NULL)
    // {
    //     if(level%2!=0)
    //         return level;
    //     else
    //         return (level-1);
    // }

    // return max(depthOfOddLeafUtil(root->left,level+1),depthOfOddLeafUtil(root->right,level+1));

    if (root == NULL) 
        return 0; 
  
    // If this node is a leaf and its level 
    // is odd, return its level 
    if (root->left == NULL &&  
        root->right == NULL && level & 1) 
        return level; 
  
    // If not leaf, return the maximum value 
    // from left and right subtrees 
    return max(depthOfOddLeafUtil(root->left, level + 1), 
               depthOfOddLeafUtil(root->right, level + 1));
    
}
