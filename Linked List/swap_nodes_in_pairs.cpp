https://leetcode.com/problems/swap-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode* head) {
    
    // Recursive way
    
        if(!head) return NULL;
        if(!head->next) return head;
        
        swap(head->val,head->next->val);
        head->next->next=swapPairs(head->next->next);
        return head;
    }
};


// Iterative way

 ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* p = head, *q, *temp;
        
        int flag = 0;
        
        while(1)
        {
            
            q = p->next;

            if(flag == 0)
            head = q;
            flag = 1;

            if(q->next == NULL)
            {
                p->next = NULL;
                q->next = p;
                return head;
            }

            temp = q->next;

            if(temp->next == NULL)
            {
                p->next = temp;
                q->next = p;
                return head;
            }

            p->next = temp->next;
            q->next = p;

            p = temp;
            q = temp->next;
        
        }
        
        return head;
    }
