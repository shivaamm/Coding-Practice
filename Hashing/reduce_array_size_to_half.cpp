class Solution {
public:
    
     int minSetSize(vector<int>& arr) {
        unordered_map<int, int> counter;
        priority_queue<int> q;
        int res = 0, removed = 0;
        
        for (auto a : arr) counter[a]++;
        for (auto c : counter) q.push(c.second);
        
        while (removed < arr.size() / 2) {
            removed += q.top();
            q.pop();
            res++;
        }
        
        return res;
    }
    
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    
    int minSetSize(vector<int>& arr) {
         //Create a map to store frequency of a number
        map<int, int> mp;
        for(auto i: arr)
            mp[i]++;
        
        //Create a vector pair to store number and its frequency
        vector<pair<int, int>> vp;
        for(auto i: mp)
            vp.push_back({i.second, i.first});
        
        //Sort the vector pair in descending order according to frequency
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        
        int count = 0;
        int n = arr.size();
        
        //Iterate over the vector - pair
        //Keep subtracting largest frequency from n
        //As soon as the array size is reduced to half or less than that -> BREAK
        for(auto [i, j]: vp)
        {
            n -= i;
            if(n > (arr.size()) / 2)
                count++;
            else
            {
                count++;
                break;
            }
        }
        
        return count;
      
    
    }
};
