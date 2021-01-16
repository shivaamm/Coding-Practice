https://leetcode.com/problems/middle-of-the-linked-list/

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.

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
    ListNode* middleNode(ListNode* head) {
     ListNode *p=head;
     ListNode *q=head;
     ListNode *temp1;
     while(q!=NULL && q -> next!=NULL)
     {
         q = q->next->next;
         temp1 = p;
         p= p->next;
         
     }
     // temp1->next = temp1->next->next;
     // delete(p);
     return p;
    }
};
