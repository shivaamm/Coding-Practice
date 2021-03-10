

long int sumBT(Node* root)
{
    int rightsubtree, leftsubtree, sum = 0;
    if(root != NULL)
    {
        leftsubtree = sumBT(root->left);
        rightsubtree = sumBT(root->right);
        sum = (root->key) + leftsubtree + rightsubtree;
        return sum;
    }
}

// int addBT(Node* root) 
// { 
//     if (root == NULL) 
//         return 0; 
//     return (root->key + addBT(root->left) + addBT(root->right)); 
// }

long int sumBT(Node* root)
{
    // int rightsubtree, leftsubtree, sum = 0;
    // if(root != NULL)
    // {
    //     leftsubtree = sumBT(root->left);
    //     rightsubtree = sumBT(root->right);
    //     sum = (root->key) + leftsubtree + rightsubtree;
    //     return sum;
    // }
    int sum, sumLeft, sumRight;  
    sum = sumRight = sumLeft = 0;  
      
    //Check whether tree is empty  
    if(root == NULL) {  
        // printf("Tree is empty\n");  
        return 0;  
    }  
    else {  
        //Calculate the sum of nodes present in left subtree  
        if(root->left != NULL)  
            sumLeft = sumBT(root->left);  
          
        //Calculate the sum of nodes present in right subtree  
        if(root->right != NULL)  
              sumRight = sumBT(root->right);  
          
        //Calculate the sum of all nodes by adding sumLeft, sumRight and root node's data  
        sum = root->key + sumLeft + sumRight;   
        return sum;  
  }      
}
