https://practice.geeksforgeeks.org/problems/preorder-traversal/1/?category[]=Tree&category[]=Tree&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]TreeproblemStatusunsolveddifficulty[]-1page1category[]Tree

vector <int> preorder(Node* root)
{
  stack<Node *>s;
  Node * curr=root;
  vector<int> res;
  while(s.empty()==false||curr!=NULL)
  {
      while(curr!=NULL)
      {
          res.push_back(curr->data);
          if(curr->right!=NULL)
          s.push(curr->right);
          curr=curr->left;
      }
      if(s.empty()==false)
      {
      curr=s.top();
      s.pop();
      }
  }
  return res;
}
