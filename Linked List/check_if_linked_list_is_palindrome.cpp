#include<vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int>v;
        Node* p=head;
        while(p!=NULL){
            v.push_back(p->data);
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
