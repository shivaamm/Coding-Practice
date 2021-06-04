class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int newData) {
       // Your code here
        Node *n=new Node(newData);
       if(head==NULL){
       
        return n;
       }
       n->next=head;
       head=n;
       return head;
  
}
    // function appends the data at the end of the list
    Node *insertAtEnd(Node *head, int newData)  {
       // Your code here
       Node *n=new Node(newData);
       if(head==NULL)
       return n;
       Node *p=head;
       while(p->next!=NULL){
           p=p->next;
       }
       p->next=n;
       return head;
    }
};
