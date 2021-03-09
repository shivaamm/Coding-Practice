Algorithm 

getLeafCount(node)
1) If node is NULL then return 0.
2) Else If left and right child nodes are NULL return 1.
3) Else recursively calculate leaf count of the tree using below formula.
    Leaf count of a tree = Leaf count of left subtree + 
                                 Leaf count of right subtree

int countLeaves(Node* node)
{
    if(node == NULL)      
        return 0;  
    if(node->left == NULL && node->right == NULL)  
        return 1;          
    else
        return countLeaves(node->left) + countLeaves(node->right); 
}
