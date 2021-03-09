/* Given a non-empty binary search tree,  
return the minimum data value found in that  
tree. Note that the entire tree does not need  
to be searched. */

int minValue(Node* root)
{
    while (root->left != NULL)  
    {  
        root = root->left;  
    }  
    return(root->data);  
   
}
