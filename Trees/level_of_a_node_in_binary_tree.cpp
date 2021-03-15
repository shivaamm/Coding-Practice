Given a Binary Tree and a pointer to the Node in that tree. Write a function to find level of Node in the Tree. For Example, in the below tree
 
         0
       /   \
     1      4
   /  \    /  \
 2   3    5    6

If the input key is 3, then your function should return 3. If the input key is 4, then your function should return 2 and for key which is not present in key,
then your function should return 0.
  
int getL(struct Node *root, int n, int level)
{
    if(root == NULL)
        return 0;
 
    if(root->data == n)
        return level;
 
    return getL(root->left, n, level+1) | getL(root->right, n, level+1);
}

int getLevel(struct Node *root, int target)
{
	return getL(root,target,1);
}
