// head : reference to head of linked list
int getCount(struct Node* head){

    int count=0;
    while(head!=0)
    {
        head=head->next;
        count++;
    }
    return count;

}
