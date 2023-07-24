class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void helper(Node *root, int h, vector<int> &ans)
    {
        if(!root)
            return;
        
        if(h == ans.size())
        {
            ans.push_back(root->data);
        }
        else
        {
            ans[h] = root->data;
        }
        helper(root->left, h+1, ans);
        helper(root->right, h+1, ans);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       helper(root, 0, ans);
       return ans;
    }
};
