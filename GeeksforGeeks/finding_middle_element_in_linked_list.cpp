/* Approch used - two pointer
setup two pointers, one that will traverse the linked list one node at a time, and the other pointer will traverse two nodes at a time. 
This way when the faster pointer reaches the end of the linked list, the slower pointer will be halfway there because it was only moving
one node at time while the faster one was moving two nodes at a time. This allows you to find the middle node of a linked list with only one pass, 
instead of passing through the whole linked list once, and then again to find the middle element.
*/

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
