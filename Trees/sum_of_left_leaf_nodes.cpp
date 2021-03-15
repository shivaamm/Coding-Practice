Approach:

Firstly do the general base case check i.e whether root is null or not.
Then check whether there is any eft child of root and if exists, then it is leaf or not.
If left child exists and its leaf then add it to a sum variable declared privately.
Now recursively call the function the function for left and right subtree.
Finally return the sum variable.

class Solution {
public:
     int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
       
       if(root==NULL)
            return 0;
        if(root->left && root->left->left==NULL && root->left->right==NULL)
            sum+=root->left->val;
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};

****************************** using queue ********************************

        if(!root)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            
            int n=q.size();
            for(int i=0;i<n;i++){
                auto f=q.front();
                q.pop();
                if(f->left){
                    if(f->left->left==NULL && f->left->right==NULL)
                    {
                        sum+=f->left->val;
                    }
                    else
                    q.push(f->left);
                }
                if(f->right)
                    q.push(f->right);
            }
        }
        return sum;
