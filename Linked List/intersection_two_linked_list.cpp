https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        if(headA == nullptr || headB == nullptr)
            return nullptr;
        ListNode* a = headA , *b = headB;
        
        while(a != b){
             
            a = (a) ? a->next: headB;
            b = (b) ? b->next: headA;
               
        }
        
        return a;
        
  OR
      
      ListNode *a = headA, *b = headB;
        
        while (a || b) {
            if (a == b) return a;
            
            if (a) a = a->next;
            else a = headB;
            
            if (b) b = b->next;
            else b = headA;
        }
        return NULL;
        
        // ListNode *p=headA;
        // ListNode *q=headB;
        // int c1=0,c2=0;
        // while(p!=NULL)
        // {
        //     c1++;
        //     p=p->next;
        // }
        // while(q!=NULL)
        // {
        //     c2++;
        //     q=q->next;
        // }
        // int d=abs(c1-c2);
        // ListNode *temp1,*temp2;
        // if(c1>c2)
        // {
        //     p=headA;
        //     q=headB;
        // }
        // else
        // {
        //     p=headA;
        //     q=headB;
        // }
        // int count=0;
        // while(count<d)
        // {
        //     p=p->next;
        //     count++;
        // }
        // while(p->next!=q->next)
        // {
        //     p=p->next;
        //     q=q->next;
        // }
        // return p;
    }
};
