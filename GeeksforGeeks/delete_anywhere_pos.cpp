/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    Node *temp = head;
   Node *prev;
   /*if head is NULL i.e. linked list
     is empty */
   if(temp == NULL)
      return head;
   /*If the head is the node that is
   to be deleted*/
   if(x == 1)
   {
      head = temp->next; //change head
      free(temp);      //free old head
      return head;
   }

   /*Traversing till we find the
   node to be deleted*/
   for(int i=1 ; i!=x ; i++)
   {
      prev = temp;
      temp = temp->next;
   }

   /*This condition is true, if the
   data is not present in LL*/
   if(temp == NULL)
   {
      cout<<"\nData not present\n";
      return head;
   }
   else
   {
      /*Deletion of the node*/
      prev->next = temp->next;
      free(temp);
   }
   return head;
}
