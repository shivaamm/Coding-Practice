https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
        ListNode* result=new ListNode(0);
        ListNode* l1=A;
        ListNode* l2=B;
        ListNode* temp=result;

        while(l1 && l2){
            if (l1->val < l2->val){
                temp->next=new ListNode(l1->val);
                l1=l1->next;
            }
            else{
                temp->next=new ListNode(l2->val);
                l2=l2->next;            
            }
            temp=temp->next;

        }
        if(l1)temp->next=l1;
        if(l2)temp->next=l2;
        return result->next;
    }
};
