int minDepth(Node *node) {
 if(node==NULL)
        return 0;
    if(node->left==NULL && node->right==NULL)
        return 1;
        
    // If left subtree is NULL, recur for right subtree
    // if (!node->left)
    if(node->left==NULL)
    return minDepth(node->right) + 1;
 
    // If right subtree is NULL, recur for left subtree
    // if (!node->right)
    if(node->right==NULL)
    return minDepth(node->left) + 1;
    
    return min(minDepth(node->left),minDepth(node->right)) + 1;
}

