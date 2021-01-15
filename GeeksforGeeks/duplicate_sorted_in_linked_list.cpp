// root: head node
Node *removeDuplicates(Node *root)
{
    Node *p = root;
    Node *q;
    while(p!=NULL && p->next!=NULL)
    {
      if(p->data == p->next->data)
      {
          q = p->next->next;
          
          if(q==NULL)
          {
              p->next = NULL;
              break;         
          } 
          
          p->next = q;
      }
    
      if(p->data != p->next->data)
        p = p->next;
    }
    return root;
}
