class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        // queue<int> qu;
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int count=0;
        stack<int> s;
        
        while(q.size()>0)
        {
            if(q.front()==k)
            count++;
            s.push(q.front());
            q.pop();
        }
        while(s.size()>0)
        {
            q.push(s.top());
            s.pop();
        }
        return count;
    }
    
};
