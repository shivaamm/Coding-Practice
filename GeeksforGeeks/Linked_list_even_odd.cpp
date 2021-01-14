// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int count=0;
    struct Node* temp;
    temp=head;
     while(temp!=NULL)
     {
         temp=temp->next;
         count++;
     }
     if(count%2==0)
        return 0;
     else
        return 1;

}
