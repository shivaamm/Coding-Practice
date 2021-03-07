void inOrder(Node* root)
{
    if(!root)
    return;
    stack<Node *>s;
    Node *x=root;
    s.push(x);
    x=x->left;
    while(!s.empty()||x)
    {
        while(x)
        {
            s.push(x);
            x=x->left;
        }
        x=s.top();
        cout<<x->data<<" ";
        s.pop();
        x=x->right;
    }
}
