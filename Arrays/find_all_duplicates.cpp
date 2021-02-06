https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=i+1)
                v.push_back(nums[i]);
        
        return v;
    }
};


Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
