

class Solution {
private:
    ListNode* head;
    
public:
    Solution(ListNode* head) {
        this->head = head;
        std::srand(std::time(0)); // seed the random number generator
    }
    
    int getRandom() {
        int count = 0;
        int result = 0;
        ListNode* curr = head;
        
        while (curr) {
            count++;
            // generate a random number between 1 and the count
            // if the random number is 1, update the result with the current node's value
            if (std::rand() % count == 0) {
                result = curr->val;
            }
            curr = curr->next;
        }
        
        return result;
    }
};
