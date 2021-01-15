// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
    Node *imp=new Node(x);
	if(head==NULL)
	   {
	       head=imp;
	       return head;
	   }
	Node *temp1=head,*temp=head;
	while(temp->next!=NULL&&temp->next->next!=NULL){
	    temp1=temp1->next;
	    temp=temp->next->next;
	}
	if(temp->next==NULL||temp->next->next==NULL){
	    imp->next=temp1->next;
	    temp1->next=imp;
	    return head ;
	}
}
    
//     Node *newnode=new Node(x);
// 	Node *temp=head;
// 	int c;
// 	while(temp!=NULL)
// 	{
// 	    c++;
// 	    temp=temp->next;
// 	}
// 	c=(c-1)/2;
// 	temp=head;
// 	while(c-->0)
// 	    temp=temp->next;
// 	newnode->next=temp->next;
// 	temp->next=newnode;
// 	return head;

