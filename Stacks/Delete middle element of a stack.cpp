class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> temp;
        int mid = sizeOfStack / 2;
        for (int i = 0; i < mid; i++)
        {
          temp.push(s.top());
          s.pop();
        }
        s.pop();
    
        while (!temp.empty())
        {
          s.push(temp.top());
          temp.pop();
        } 
    }
};
