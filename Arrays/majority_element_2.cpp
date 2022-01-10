class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        // int res=0;
        
        // if(n==0)
            // return 0;
        
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        // for(int i=0;i<n-1;i++)
        // {
            // if(n>=3){
                for(auto i:mp)
                {
                    if(i.second>(n/3))
                        v.push_back(i.first);
                }
           // }
        // }
        return v;
    }
};
