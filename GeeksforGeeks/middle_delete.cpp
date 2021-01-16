// TWO SLOUTIONS - 
/*
Input:
LinkedList: 1->2->3->4->5
Output: 1 2 4 5
*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // if(head==NULL) return head;
    // if(head->next == NULL) return NULL;
    // if(head->next->next==NULL){
    //     head->next = NULL;
    //     return head;
    // }
    // Node *slow=head,*fast=head->next->next;
    // while(fast!=NULL && fast->next!=NULL){
    //     fast = fast->next->next;
    //     slow = slow->next;
    // }
    // slow->next = slow->next->next;
    // return head;
    Node *p=head;
     Node *q=head;
     Node *temp1;
     while(q && q -> next)
     {
         q = q->next->next;
         temp1 = p;
         p= p->next;
         
     }
     temp1->next = temp1->next->next;
     free(p);         // for c++ use delete(p)
     return head;
}
