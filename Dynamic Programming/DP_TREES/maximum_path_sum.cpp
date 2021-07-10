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
    
    int res= INT_MIN;
    
    int solve(TreeNode* root) {
        
        if (root == NULL)    ////////////////////////  Base Condition
            return 0;
         
        int l = solve(root->left);         /////////////////////  Hypothesis
        int r = solve(root->right);
        
        int temp = max(root->val + max(l, r), root->val);          /////// Induction
        int ans = max(temp, l + r + root->val);
        res = max(res, ans);
        
        return temp;
    }
    
    int maxPathSum(TreeNode* root) {
        solve(root);
        return res;
    }
};
