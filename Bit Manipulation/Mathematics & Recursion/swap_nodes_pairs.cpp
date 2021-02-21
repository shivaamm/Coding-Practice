https://leetcode.com/explore/learn/card/recursion-i/250/principle-of-recursion/1681/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        
        swap(head->val,head->next->val);
        head->next->next=swapPairs(head->next->next);
        return head;
    }
};
