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
    int maxLevelSum(TreeNode* root) {

          int ans = -1;
          int lvl = 0;
          int maxSum = INT_MIN;
          queue<TreeNode*> q;

          q.push(root);

          while(!q.empty()){
              
               lvl++;
              int size = q.size();
              int temp = 0;

               // finding the sum of node values at the current level
              for(int i=0;i<size;i++){

              TreeNode* node = q.front();
              q.pop();
               
                temp += node->val;
                
                if(node->left)
                 q.push(node->left);

                if(node->right)
                 q.push(node->right); 

              }

            // if the sum at the current level is greater than the 
           // maximum then update the maxSum and make ans equal to 
          // current level

              if(temp > maxSum){
                  ans = lvl;
                  maxSum = temp;
              }
          }
        
        return ans;
    }
};
