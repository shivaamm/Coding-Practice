int countLeaves(Node* node)
{
    if(node == NULL)      
        return 0;  
    if(node->left == NULL && node->right == NULL)  
        return 1;          
    else
        return countLeaves(node->left) + countLeaves(node->right); 
}
