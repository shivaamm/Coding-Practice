class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *st=head;
        if(head==NULL || head->next==NULL) return head;
        int cnt=1;
        while(st->next!=NULL)
        {
            cnt++;
            st=st->next;
        }
        k=k%cnt;
        if(k==0) return head;
        Node *st1=head;
        int ct=1;
        Node *prev;
        Node *suc;
        while(st1->next!=NULL)
        {
            if(ct==k)
            {
                prev=st1;
                suc=st1->next;
                prev->next=NULL;
                st->next=head;
                head=suc;
                break;
            }
            ct++;
            st1=st1->next;
        }
        return head;
        
        
        /////////////////////////////////////////////////////////  better solution  //////////////////////////////
        
        
        Node *tail=NULL;
        for(Node *c=head;c!=NULL;c=c->next)
        tail=c;
        for(int i=0;i<k;i++)
        {
            Node *t=head;
            head=head->next;
            tail->next=t;
            t->next=NULL;
            tail=t;
        }
        return head;
    }
};
    
