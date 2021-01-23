https://leetcode.com/problems/merge-in-between-linked-lists/

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if (!list1) 
            return list1;
        
        ListNode *start=list1,*end=list1;
        int index=1;
        while (index<a)
        {
            start=start->next;
            index++;
        }
        index=0;
        while (index<b)
        {
            end=end->next;
            index++;
        }
        ListNode *p=list2,*q=list2;
        while(q->next!=0)
        {
            q=q->next;
        }
        
        start->next=p;
        q->next=end->next;
        
        return list1;
    }
};
