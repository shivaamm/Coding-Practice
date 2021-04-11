void util(Node* root,map<int,vector<int>>&mp,int level)
{
    if(root==NULL)
    return;
    if(level%2==1)
    mp[level].push_back(root->data);
    util(root->left,mp,level+1);
    util(root->right,mp,level+1);
}
void printOddNodes(Node *root)
{
    map<int,vector<int>>mp;
    util(root,mp,1);
    for(auto it:mp)
    {
        for(int j=0;j<it.second.size();j++)
        cout<<it.second[j]<<" ";
    }
    cout<<endl;
}

****************************************************

void odd(Node *root, bool ifodd = true){
   if (root == NULL)
      return;
   if (ifodd)
      cout << root->data << " " ;
   odd(root->left, !ifodd);
   odd(root->right, !ifodd);
}

****************************************************

// void printOddNodes(Node *root)
// {
//     struct Node *temp[1000];
//     int i,j,k,l,m,n;
//     for(i=0;i<1000;i++)
//     temp[i]=NULL;
//     i=0;
//     temp[i]=root;
//     k=0;
//     l=1;
//     n=0;
//     while(temp[i]!=NULL)
//     {
//         m=l;
//         for(j=i;j<l;j++)
//         {
//             if(k==0)
//             printf("%d ",temp[j]->data);
//             if(temp[j]->left!=NULL)
//             {
//             n++;
//             temp[n]=temp[j]->left;
//             }
//             if(temp[j]->right!=NULL)
//             {
//                 n++;
//                 temp[n]=temp[j]->right;
//             }
//         }
//             if(k==0)
//             k=1;
//             else
//             k=0;
//             l=n+1;
//             i=m;
//     }
//     printf("\n");
// }
