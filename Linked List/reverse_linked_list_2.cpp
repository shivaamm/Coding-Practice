https://leetcode.com/problems/reverse-linked-list-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* prev=NULL;
        ListNode* t=head;
        int c=1;
        while(c<m){
            prev=t;
            t=t->next;
            c++;
        }
        ListNode* c1=t;
        ListNode* p1=prev;
        ListNode* t1=NULL;
        int v=n-m+1;
        while(v>0){
            t1=t->next;
            t->next=prev;
            prev=t;
            t=t1;
            v--;
        }
       if(p1!=NULL)
           p1->next=prev;
        else
            head=prev;
        c1->next=t;
        return head;
    }
};



 /////THIS APPROACH WORKS FOR ONLY SOME TEST CASES
 
//         if (m==n) return head;
//         if (!head) return head;
        
        
//         //finding node right before reverse
//         ListNode* start=head;
//         int index=2;
//         while (index<m)
//         {
//             start=start->next;
//             index++;
//         }
//         ListNode *p,*q,*r=head,*t,*newnode=p,*prevnode;
        
//         if (m==1)
//         {
//             p=head;
//         }
//         else{
//             p=start->next;
//         }
//         while (index<n)
//         {
//             r=r->next;
//             index++;
//         }
//         q=r->next;
//         cout<<start->val<<endl;
//         cout<<p->val<<endl;
//         cout<<q->val<<endl;
        
//          t=q->next;
//         prevnode=t;
//         start->next=q;
//         while(p!=q)
//         {
//             newnode=newnode->next;
//             p->next=prevnode;
//             prevnode=p;
//             p=newnode;
//         }
        
       
//         // q->next=t;
//         // p->next->next=p;
//         // p->next=t;
//         return head;
