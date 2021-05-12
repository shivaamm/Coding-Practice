/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   struct Node *temp=head;
  struct Node *prev=head;
  if (head!=NULL)  
    {  
        while(temp!=NULL && temp->next!=NULL) 
        {
          temp = temp->next->next;
          prev = prev->next;
        }
    }
    return prev->data;
}
