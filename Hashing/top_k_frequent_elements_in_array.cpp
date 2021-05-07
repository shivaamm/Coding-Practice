class Solution {
  public:
    static bool compare (pair<int,int> p1, pair<int,int> p2)
    {
        // If 2 elements have same frequency then return larger element 
        if (p1.second == p2.second) 
            return (p1.first > p2.first); 
            
        // Else return element with larger frequency
        else
            return (p1.second > p2.second); 
    }
  
  
    vector<int> topK(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        // convert frequency map to vector
        vector<pair<int,int> > frequency(mp.begin(), mp.end());
        
        // sort frequency vector using user defined compare function
        sort(frequency.begin(), frequency.end(), compare);
        
        // add first k elements from sorted vector to result 
        for(int i=0; i<k; i++)
            v.push_back(frequency[i].first);
        
        return v;
    }
};
