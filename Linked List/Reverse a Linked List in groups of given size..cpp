class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node* cur=head;

        node* prev=NULL;

        int count=0;

        while(count <k && cur!=NULL){

            node* next=cur->next;

            cur->next=prev;

            prev=cur;

            cur=next;

            count++;

        }

       if (cur != NULL) {

        head->next = reverse(cur, k);

    }

        return prev;
    }
};
