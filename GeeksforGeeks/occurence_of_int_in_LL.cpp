int count(struct node* head, int search_for)
{
    
    if(head == NULL)
        return 0;
    struct node* temp;
    temp=head;
    int count=0;
    while(temp!= NULL)
    {
        if(temp->data==search_for)
            count++;
        temp=temp->next;
    }
    return count;
}
