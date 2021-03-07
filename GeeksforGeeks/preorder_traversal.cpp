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
  // Your code here
  vector<int>p;
  preorder1(root,p);
  return p;
}

// vector <int> preorder(Node* root)
// {
//   // Your code here
//   stack<Node *>s;
//   Node * curr=root;
//   vector<int> res;
//   while(s.empty()==false||curr!=NULL)
//   {
//       while(curr!=NULL)
//       {
//           res.push_back(curr->data);
//           if(curr->right!=NULL)
//           s.push(curr->right);
//           curr=curr->left;
//       }
//       if(s.empty()==false)
//       {
//       curr=s.top();
//       s.pop();
//       }
//   }
//   return res;
// }
