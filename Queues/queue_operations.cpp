class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        int z=0;
        queue<int> n1;
        while(!q.empty())
        {
            if(q.front()==k)
            z++;
            n1.push(q.front());
            q.pop();
        }
        q=n1;
        if(z==0)return -1;
        return z;
    }
    
};


****************************************************************************

class Solution{
    public:
    // Function to insert element into the queue
    unordered_map<int,int>mp;
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
        mp[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        return mp[k]==0?-1:mp[k];
    }
    
};
