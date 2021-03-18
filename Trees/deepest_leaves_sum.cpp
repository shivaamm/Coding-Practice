https://leetcode.com/problems/deepest-leaves-sum/

*************************************************** using maps ******************************************
// class Solution {
// public:
//    unordered_map<int,int> map;
//     int deepest=0;
    
//     int deepestLeavesSum(TreeNode* root){
//         deepestLeavesSum(root,0);
//         return map[deepest];
//     }
//     void deepestLeavesSum(TreeNode* root,int level) {
//         if(root==nullptr) return;
        
//         if(deepest<=level) deepest=level;
//         map[level]=map[level]+root->val;
        
//         deepestLeavesSum(root->left,level+1);
//         deepestLeavesSum(root->right,level+1);
//     }
// };

*********************************************** using recursion *********************************
class Solution {
private:
    int sum = 0;
    int maxLvl = 0;
public:
    void calculateSumAtLevel(TreeNode* node, int lvl) {
        if(node == NULL) return;                    // if node is NULL, return
        if(lvl > maxLvl) 
        {
            sum = 0; 
            maxLvl = lvl;     // if lvl is greater, reset sum, change maxlevel
        }
        if(lvl == maxLvl) 
            sum += node->val;         // if lvl is at max, increment sum
        calculateSumAtLevel(node->left, lvl+1);     // repeat with left node
        calculateSumAtLevel(node->right, lvl+1);    // repeat with right node
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL) return 0;                  // if root is NULL return 0
        calculateSumAtLevel(root, 0);               // calculate sum, begin at lvl 0
        return sum;                                 // return sum
    }
};
