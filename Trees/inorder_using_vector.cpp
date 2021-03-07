https://practice.geeksforgeeks.org/problems/inorder-traversal/1/?category[]=Tree

void solve(Node *root,vector<int> &v)
{       if(root==NULL)
            return;
       // if(root->left)
        solve(root->left,v);
            v.push_back(root->data);
       // if(root->right)
        solve(root->right,v);
}
        

// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{       vector<int>v;
        solve(root,v);
        return v;
  // Your code here
}
