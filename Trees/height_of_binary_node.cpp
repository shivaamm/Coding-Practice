lass Solution{
    public:
    
    int height(struct Node* root){
       if (root == NULL) {
        return 0;
    }
 
    // recur for the left and right subtree and consider maximum depth
    return 1 + max(height(root->left), height(root->right));
    }
};
