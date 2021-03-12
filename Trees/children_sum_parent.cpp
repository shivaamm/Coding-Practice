// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *node)
{
    int left_data = 0, right_data = 0; 

    if(node == NULL || (node->left == NULL && node->right == NULL)) 
        return 1; 
    else
    { 

        if(node->left != NULL) 
            left_data = node->left->data; 

        if(node->right != NULL) 
            right_data = node->right->data; 
      
        if((node->data == left_data + right_data) && isSumProperty(node->left) && isSumProperty(node->right)) 
            return 1; 
        else
            return 0; 
    } 
}
