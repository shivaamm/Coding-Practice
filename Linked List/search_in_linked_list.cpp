bool searchLinkedList(Node *head, int x)
{
    while(head!=NULL)
      {
          if(head->data==x)
           return(true);
           else
           head=head->next;
      }
      return(false);
}
