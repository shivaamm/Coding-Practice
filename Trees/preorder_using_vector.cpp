https://practice.geeksforgeeks.org/problems/preorder-traversal/1/?category[]=Tree&category[]=Tree&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]TreeproblemStatusunsolveddifficulty[]-1page1category[]Tree

void preorder1(Node* root,vector<int> &p){
      if(root){
      p.push_back(root->data);
      preorder1(root->left,p);
      preorder1(root->right,p);
  }
  return;
}
vector <int> preorder(Node* root)
{
  vector<int>p;
  preorder1(root,p);
  return p;
}
