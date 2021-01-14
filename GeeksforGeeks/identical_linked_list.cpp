// This function should return true if both 
// linked lists are identical else return false.
bool areIdentical(struct Node *head1, struct Node *head2)
{
    struct Node* temp1;
    struct Node* temp2;
    temp1=head1;
    temp2=head2;
    if(temp1==NULL && temp2==NULL)
    return 1;
    if(temp1==NULL || temp2==NULL)
    return 0;
    while(temp1!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }else
            return false;
    }
    return true;
    
