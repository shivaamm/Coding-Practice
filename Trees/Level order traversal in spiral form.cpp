vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    int f=1;
    while (!q.empty()) 
    {
        int size=q.size();
        vector<int>v;
        while (size)
        {
            root=q.front();
            v.push_back(root->data);
            q.pop();
            if(root->left!=NULL)
            q.push(root->left);
            if(root->right!=NULL)
            q.push(root->right);
            size--;
        }
        if(f)reverse(v.begin(),v.end());
        ans.insert(ans.end(),v.begin(),v.end());
        f^=1;
    }
    return ans;//Your code here
}
