https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
       vector<int>v;
        ListNode* p=head;
        while(p!=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        int n=v.size();
        for(int i=0;i<n/2;i++)
        {
            if(v[i]!=v[n-i-1])
                return false;
        }
        return true;
    }
};
