class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
        {
            return 0;
        }
        if(root!=NULL)
        {
            if(root->val >= low && root->val <=high)
                sum+=root->val;
        }
        rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        return sum;
        
    }
};

************************** OR ****************************

int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
       int val =0;
        if(root->val>=low && root->val<=high)
            val =root->val;
       
        return  rangeSumBST(root->left, low,  high) + val +  rangeSumBST(root->right,  low, high);
