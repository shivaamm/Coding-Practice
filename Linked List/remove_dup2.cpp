https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

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
    ListNode* deleteDuplicates(ListNode* head) {
      if(!head)
          return NULL;
        unordered_map<int,int>mymap;   //used unordered map here to count the frequecy
        ListNode *curr=head;
        while(curr)
        {
            mymap[curr->val]++;   // finding freq 
            curr=curr->next;
        }
        curr=head;
        ListNode *newnode=new ListNode(0);
        ListNode *temp=newnode;
        while(curr)
        {
            if(mymap[curr->val]<2)    //frequency
            {
                temp->next=curr;
                temp=temp->next;
            }
            curr=curr->next;
        }
        temp->next=NULL;
        curr=newnode->next;
        delete(newnode);
        return curr;
    }
};
        
        
 /***** my approach *****/       
        
        // ListNode *p = head;
      // ListNode *q;

    
        
//       while(p!=NULL && p->next!=NULL)
//       {
//           if(p->val == p->next->val)
//           {
//             q->next=p->next->next;
//               p=q->next;
//           }

//           if(p->val != p->next->val)
//             q=p;
//             p = p->next;
//       }
        
//         return head;    
//     }
