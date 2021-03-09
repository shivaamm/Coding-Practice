vector<int> preOrder(Node* root)
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
