/********* 1st Approach **********/

Node* reverseDLL(Node * head)
{
    Node *cur=head,*pre = NULL;
    while(cur!=NULL){
         cur->prev = cur->next;
        cur->next = pre;
        pre = cur;
        cur = cur->prev;
    }
    return pre;
}


/********* 2nd Approach **********/

Node* reverseDLL(Node * head)
{
    //Your code here
    if(head==NULL)
    return NULL;
    while(head->next!=NULL)
    {
        head= head->next;
    }
    Node *temp=head;
    while(temp!=NULL)
    {
        Node *s=temp->next;
        temp->next=temp->prev;
        temp->prev=s;
        temp=temp->next;
    }
    return head;
}
