class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    void solve(Node* ptr , priority_queue<int>&OoneTwo){
        if(ptr==nullptr)
            return;
        OoneTwo.push(ptr->data);
        solve(ptr->next,OoneTwo);
        ptr->data = OoneTwo.top();
        OoneTwo.pop();
    }
    Node* segregate(Node *head) {
        priority_queue<int>OoneTwo;
        solve(head,OoneTwo);
        return head;
    }
};
