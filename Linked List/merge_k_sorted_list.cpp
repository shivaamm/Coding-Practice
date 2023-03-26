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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;

        vector<int> v;
        for(int i=0; i<lists.size(); i++){
            ListNode *curr = lists[i];
            if(curr==NULL) continue;
            while(curr!=NULL){
                v.push_back(curr->val);
                curr = curr->next;
            }
        }
        if(v.empty()) return NULL;
        sort(v.begin(),v.end());

        ListNode *head = new ListNode(v[0]);
        ListNode *curr = head;
        for(int i=1; i<v.size(); i++){
            ListNode *temp = new ListNode(v[i]);
            curr->next = temp;
            curr = curr->next;
        }
        return head;
    }
};
