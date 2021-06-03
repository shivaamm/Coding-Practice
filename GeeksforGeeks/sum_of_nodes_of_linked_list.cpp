int sumOfElements(Node *head)
{
   int sum=0;
   while(head!=NULL)
   {
       sum=sum+head->data;
       head=head->next;
   }
   return(sum);
}
