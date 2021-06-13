Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]



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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry=0) {
        if (!l1 && !l2 && carry == 0)
            return nullptr;
        int sum=0;
        if (l1)
            sum += l1->val;
        if (l2)
            sum += l2->val;
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        // cout << sum << " " << carry << '\n';
        ListNode* node = new ListNode(sum);
        node->next = addTwoNumbers((l1 == nullptr?nullptr:l1->next),
                                                            (l2 == nullptr?nullptr: l2->next),
                                                            carry);
        return node;
    }
};
