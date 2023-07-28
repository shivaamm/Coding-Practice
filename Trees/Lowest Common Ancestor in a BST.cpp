class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            if(root->data==n1) return root;
            if(root->data==n2) return root;
            if(root->data>n1 and root->data>n2 and root->left)
              LCA(root->left,n1,n2);
            else if(root->data<n1 and root->data<n2 and root->right)
              LCA(root->right,n1,n2);
            else return root;
        }

};
