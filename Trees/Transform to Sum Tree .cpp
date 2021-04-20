Given a Binary Tree where each node has positive and negative values. 
Convert this to a tree where each node contains the sum of the left and right sub trees in the original tree. 
The values of leaf nodes are changed to 0.

For example, the following tree

                  10
               /      \
             -2        6
           /   \      /  \ 
         8     -4    7    5
should be changed to

                 20(4-2+12+6)
               /      \
         4(8-4)      12(7+5)
           /   \      /  \ 
         0      0    0    0
         
/////////////////////////////////////////////////////////////
  FUNCTION toSumTree (node)
    1.  Check base case
        IF (node==NULL)
            Return 0;
    2.  Store old value of node
    3.  Update node value to left subtree sum + right 
        subtree sum. Use recursion to find subtree sums
    4.  Return old node value + current node value for 
        upper levels ( towards root)
END FUNCTION

*************************************************************

int toSumTree(node *Node) 
{ 
    // Base case 
    if(Node == NULL) 
    return 0; 
  
    // Store the old value 
    int old_val = Node->data; 
  
    // Recursively call for left and
    // right subtrees and store the sum as 
    // new value of this node 
    Node->data = toSumTree(Node->left) + toSumTree(Node->right); 
  
    // Return the sum of values of nodes
    // in left and right subtrees and 
    // old_value of this node 
    return Node->data + old_val; 
} 
