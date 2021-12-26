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
    ListNode* deleteMiddle(ListNode* head) {
       if (head->next == nullptr)
        return nullptr;
    auto slow = head, fast = head->next->next;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;   // here it breaks the link with the middle node since fast pointer reaches to the end and automatically slow pointer points to next of middle element
    return head;
        
        
      
      *****************************************************************************************************************************************************************
        
        
        ListNode *temp = head, *prev = head, *ahead = head->next;
        int n = 0;
        while(temp)
        {
            n++;
            temp = temp->next;
        }
        if(n == 1)
            return nullptr;
        n = n/2;
        
        while(true)
        {
            if(n == 1)
            {
                prev->next = ahead->next;
                delete(ahead);
                break;
            }
            ahead = ahead->next;
            prev = prev->next;
            n--;
        }
        return head;

    }
};
