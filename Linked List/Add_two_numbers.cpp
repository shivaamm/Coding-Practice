// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry=0) {
//          // int carry=0;
//         if (!l1 && !l2 && carry == 0)
//             return nullptr;
//         int sum=0;
//         if (l1)
//             sum += l1->val;
//         if (l2)
//             sum += l2->val;
//         sum += carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         // cout << sum << " " << carry << '\n';
//         ListNode* node = new ListNode(sum);
//         node->next = addTwoNumbers((l1 == nullptr?nullptr:l1->next), (l2 == nullptr?nullptr: l2->next), carry);
        
//         return node;
//     }
// };



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, first, second;
        ListNode *head = new ListNode(0), *tail = head;
        while (l1 || l2 || carry) {
            if (l1) {
                first = l1->val;
                l1 = l1->next;
            }
            else
                first = 0;
            
            if (l2) {
                second = l2->val;
                l2 = l2->next;
            }
            else
                second = 0;
            
            int temp = first+second+carry;
            tail->next = new ListNode(temp%10);
            tail = tail->next;
            carry = temp/10;
            
        }
        return head->next;
    }
};
