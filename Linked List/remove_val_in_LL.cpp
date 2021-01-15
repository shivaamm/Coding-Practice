https://leetcode.com/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return nullptr;
        while(head!=nullptr && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete(temp);
        }
        ListNode *temp2 = head;
        ListNode* prev = head;
        while(head!=nullptr){
            if(head->val != val){
                prev = head;
                head = head->next;
            }
            else
            {
                ListNode* temp = head;
                prev->next = head->next;
                head = head->next;
                delete(temp);
            }
        }
        
        return temp2;
    }
};
