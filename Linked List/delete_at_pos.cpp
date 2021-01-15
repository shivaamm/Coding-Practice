#include<iostream>
 
using namespace std;
 
//Declare Node
struct node
{
   int data;
   node * next;
};
 
//Insert node at start
void insertNode(node **head,int data)
{
   node *temp = new node; // temporary node created to add the new element
   temp->data = data;  // add data to temporary node
   temp->next = *head; // add the address of old head element to temporary node
   *head = temp;       // change temporary node to head node
}
 
//Delete the node at the given position
void deleteNode(node **head,int position)
{
  /*"prev" will point to the node
     whose position is before the node to be deleted.
     "temp" is a copy of head pointer*/
 
   node *temp = *head;
   node *prev;
   /*if head is NULL i.e. linked list
     is empty */
   if(temp == NULL)
      return;
   /*If the head is the node that is
   to be deleted*/
   if(position == 1)
   {
      *head = temp->next; //change head
      free(temp);      //free old head
      return;
   }
 
   /*Traversing till we find the
   node to be deleted*/
   for(int i=1 ; i!=position ; i++)
   {
      prev = temp;
      temp = temp->next;
   }
 
   /*This condition is true, if the
   data is not present in LL*/
   if(temp == NULL)
   {
      cout<<"\nData not present\n";
      return;
   }
   else
   {
      /*Deletion of the node*/
      prev->next = temp->next;
      free(temp);
   }
}
/*Function that is used to
print the Linked List*/
void display(node *head)
{
  while (head != NULL)
  {
     cout<<head->data<<"-> ";
     head = head->next;
  }
   cout<<"NULL";
}
int main()
{
  node* head = NULL;
  insertNode(&head, 72);
  insertNode(&head, 13);
  insertNode(&head, 59);
  insertNode(&head, 17);
  insertNode(&head, 33);
  insertNode(&head, 80);
 
  cout<<"Created Linked list is:\n";
  display(head);
 
  /*Deleting node at position 3*/
  deleteNode(&head,3);
  cout<<"\n\nResultant Linked list is:\n";
  display(head);
 
   return 0;
}
