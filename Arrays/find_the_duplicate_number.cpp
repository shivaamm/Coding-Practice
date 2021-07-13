class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        for(int i=0; i<nums.size(); i++){
            if(freq[nums[i]]==0){
                freq[nums[i]]=1;
            }
            else{
                return nums[i];
            }
        }
        return -1;
        
        
        /////////////////////////////////////////////////////////////////////
        
        
        int ans=0, n=nums.size();
        sort(nums.begin() , nums.end());
        for(int i=1; i<n; i++){
           if(nums[i]==nums[i-1]){
               ans=nums[i];
               break;
           }
        }
        return ans;
    }
};
