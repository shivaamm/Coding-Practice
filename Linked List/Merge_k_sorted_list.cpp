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
    
//     Algorithm merge2Lists(list1, list2):
// 1. while both list1 and list2 point to a non null node:
// 	2. if list1.val <= list2.val add list1.val to the resulting list, and advance the list1 pointer
// 	3. else if list1.val > list2.val add list2.val to the resulting list and advance the list2 pointer
// 4. for any elements remaining in either of the lists:
// 	5. add the element to the tail of the resulting list and advance the pointer.
// 6. return the head of the result list.
    
//     Time: O(nlogk) where n is the total number of elements, and k is the number of lists initially given
// Space: O(nlogk) since the merging requires an extra space of O(n) for the result list and there are O(logk) calls to it.
    
    ListNode* merge(ListNode* a,ListNode* b) {
        if(!a) return b;
        if(!b) return a;
        ListNode* temp=NULL;
        if(a->val<=b->val) 
        {
            temp =a;
            temp->next = merge(a->next,b);
        }
        else 
        {
            temp = b;
            temp->next = merge(a,b->next);
        }
        return temp;        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        ListNode* ans=NULL;
        for(auto l : lists) 
        {
            ans = merge(ans,l);
        }
        return ans;
    }
};
