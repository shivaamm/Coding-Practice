https://practice.geeksforgeeks.org/problems/postorder-traversal/1/?category[]=Tree&category[]=Tree&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]TreeproblemStatusunsolveddifficulty[]-1page1category[]Tree

void post(vector<int>&v,Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    post(v,root->left);
    post(v,root->right);
    v.push_back(root->data);

}
vector <int> postOrder(Node* root)
{
    vector<int>v;
    post(v,root);
    return v;
}
