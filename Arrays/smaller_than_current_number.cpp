class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;    
        int n=nums.size();
        vector<int> snum=nums;
        
        sort(snum.begin(),snum.end());
        for(int i=n-1;i>=0;i--)
            mp[snum[i]]=i;
        
        for(int i=0;i<n;i++)
            nums[i]=mp[nums[i]];
        
        return nums;
        
        *****************************************************************
        // vector<int> v;
        // int maxi;
        // for(int i=0;i<nums.size();i++){
        //     maxi=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(j != i and nums[j] < nums[i])
        //             maxi++;
        //     }
        //     v.push_back(maxi);
        // }
        // return v;
        
        *****************************************************************
          int hash[101]={0}, count=0;
        for(auto num: nums) hash[num]++;
        for(int i=0;i<101;i++){
            if(hash[i]!=0){
                int t=hash[i];
                hash[i] = count;
                count+=t;
            }
        }
        vector<int> ans;
        for(auto num:nums) ans.push_back(hash[num]);
        return ans;
        
    }
    
};
