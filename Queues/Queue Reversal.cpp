class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        queue<int> ans;
        while(q.empty()==false)
        {
            s.push({q.front()});
            q.pop();
        }
        while(s.empty()==false)
        {
            ans.push(s.top());
            s.pop();
        }
        return ans;
    }

*****************************************************************************************************

        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(),v.end());
        for(int i =0;i<v.size();i++)
        {
            q.push(v[i]);
        }
        return q;


};
