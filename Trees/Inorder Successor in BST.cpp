class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if (x->right) {
            x = x->right;
            while (x->left) {
                x = x->left;
            }
            return x;
        }
        Node *successor = NULL;
        while (root) {
            if (x->data < root->data) {
                successor = root;
                root = root->left;
            } else if (x->data > root->data) {
                root = root->right;
            } else {
                break;
            }
        }
        return successor;
    }
};
