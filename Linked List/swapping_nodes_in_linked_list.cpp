https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int pos = 1; // current position of pointer - at head
        
        while(pos != k){
            temp = temp->next;
            ++pos;
        }
        
        ListNode* first = temp;  // temp is now pointing to the first required node
        ListNode* second = head;
        
		//Logic: now when temp->next reaches the end of the LinkedList, "second" would be pointing to the kth node from the end
        while(temp->next){ // So, at the end of this while loop, "second" would be pointing to the second reqd. node
            temp = temp->next;
            second = second->next;
        }
        
        // swapping values in first and second node
        int i = first->val;
        first->val = second->val;
        second->val = i;
        
        return head;
    }
};


***************************** optimised code ************************
ONE PASS
We traverse the list until we reach the kth node.
Then we set "kth" to that node to remember it,
As ptr2 points to head
now start traversing the list, while we move both ptr1 and ptr2.
When ptr1 reaches the end it has covered (n-k) distance
so ptr2 is on the (n-k)th node.
Now we swap "kth" and "ptr2" and we're done!

 ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k)
            ptr1 = ptr1->next;
        
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while (ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;

*******************using vectors**************************************

 ListNode* swapNodes(ListNode* head, int k) {
         vector<ListNode*> v;
        while(head){
            v.push_back(head);
            head = head->next;
        }
        swap(v[k-1]->val, v[v.size()-k]->val);
        return v[0];
    }
	
