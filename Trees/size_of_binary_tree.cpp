https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1/?difficulty[]=-1

*****************
Algorithm to find size of a binary tree
Let "node" be the pointer to a tree node and getSizeOfTree function returns size of tree.
If node is NULL(Empty tree), then return 0.
Find the total number of nodes in left sub tree by recursively calling getSizeOfTree for left sub tree(getSizeOfTree(node->left)). Let it be leftTreeSum.
Find the total number of nodes in right sub tree by recursively calling getSizeOfTree for right sub tree(getSizeOfTree(node->right)). Let it be rightTreeSum.
Return (leftTreeSum + 1 + rightTreeSum).
******************



/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* root)
{
   if(root == NULL)
        return 0;
    return getSize(root->left) + 1 + getSize(root->right);
}
