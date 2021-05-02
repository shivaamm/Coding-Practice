class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        
        ************************************ using hashing ******************************
        
        unordered_set<Node*>s;
        while(head!=NULL)
        {
            if(s.find(head)!=s.end())
                return true;
            s.insert(head);
            head=head->next;
        }
        return false;
        
        
        ************************************ using two pointer approach ******************************

        
        // if (!head) 
        //     return false;
        
        // Node *slow = head, *fast = head;
        
        // while (fast->next && fast->next->next) {
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if (slow == fast) 
        //         return true;
        // }
        
        // return false;
    }
};
