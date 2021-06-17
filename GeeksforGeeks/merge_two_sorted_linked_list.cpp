Node* sortedMerge(Node* head1, Node* head2)  
{  
        Node* result=new Node(0);
        Node* l1=head1;
        Node* l2=head2;
        Node* temp=result;

        while(l1 && l2){
            if (l1->data < l2->data){
                temp->next=new Node(l1->data);
                l1=l1->next;
            }
            else{
                temp->next=new Node(l2->data);
                l2=l2->next;            
            }
            temp=temp->next;

        }
        if(l1)temp->next=l1;
        if(l2)temp->next=l2;
        return result->next;
}  
