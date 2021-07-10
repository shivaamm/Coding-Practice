class Solution {
  public:
  
    int height(Node* root, int& ans)
    {
        if (root == NULL)
            return 0;
     
        int left_height = height(root->left, ans);
     
        int right_height = height(root->right, ans);
     
        // update the answer, because diameter of a
        // tree is nothing but maximum value of
        // (left_height + right_height + 1) for each node
        ans = max(ans, 1 + left_height + right_height);
     
        return 1 + max(left_height, right_height);
    }

    
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if (root == NULL)
        return 0;
        int ans = INT_MIN; // This will store the final answer
        height(root, ans);
        return ans;
    }
};
