https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head;
      ListNode *q;
      while(p!=NULL && p->next!=NULL)
      {
          if(p->val == p->next->val)
          {
              q = p->next->next;

              if(q==NULL)
              {
                  p->next = NULL;
                  break;         
              } 

              p->next = q;
          }

          if(p->val != p->next->val)
            p = p->next;
      }
        return head;    
    }
};
