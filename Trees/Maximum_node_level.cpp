vector<int>dep(50,0);
int max_depth;
void findMax(Node* node,int depth)
{
    if(node==NULL)
    return;

        dep[depth]++;
        max_depth=max(max_depth,depth);
        findMax(node->left,depth+1);
 
        findMax(node->right,depth+1);
}

int maxNodeLevel(Node *root)
{
    for(int i=0;i<50;i++)
    dep[i]=0;
    
    int depth=0;
    findMax(root,depth);
    int res=0;
    int max_val=0;
   // for(int i=0;i<100;i++)
    //cout<<dep[i]<<" ";
    
    for(int i=0;i<=max_depth;i++)
    {
        if(dep[i]>max_val)
        {
            res=i;
            max_val=dep[i];
        }
    }
    return res;
}
