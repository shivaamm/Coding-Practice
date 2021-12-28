/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (!root)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        return (left == -1 || right == -1 || abs(left-right) > 1) ? -1 : max(left, right)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};


// The first two conditions - (left == -1 || right == -1) - mean that the recursion returned -1, so somewhere there's a not balanced node.
// The third condition - (abs(left-right) > 1) - means that the current node is not balanced.
// So if one of the three conditions above is true, we return -1.
// otherwise, max(left, right)+1.
