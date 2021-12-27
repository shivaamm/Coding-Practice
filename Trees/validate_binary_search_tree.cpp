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
     void helper(TreeNode* root, vector<int> &inorder) {
        
        if(root == NULL) 
            return;
        helper(root->left, inorder);
        inorder.push_back(root->val);
        helper(root->right, inorder);
    }
    
    bool isValidBST(TreeNode* root) {
        
        vector<int> inorder;
        helper(root, inorder);    // store the inorder traversal since it will store in sorted order
        
        int n = inorder.size();
        
        for(int i=1;i<n;i++) {
            if (inorder[i] <= inorder[i-1])   // just check if it's unsorted then false else true
                return false;
        }
        return true;
    }
};



// The important take away of the inorder traversal is that it returns the values of a valid binary tree in sorted order. Keeping that in mind if a binary tree is invalid then it's inordere traversal will also be unsorted.
// That is what we are doing in the solution we first store the inorder values of the binary tree using the inorder traversal into the inorder vector and then check if the vector is sorted or not and based on that we return true or false.
