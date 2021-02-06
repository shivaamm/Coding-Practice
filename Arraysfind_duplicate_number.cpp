https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[abs(nums[i])-1]<0) 
        //         return abs(nums[i]);
        //     else 
        //         nums[abs(nums[i])-1] = -(nums[abs(nums[i])-1]);
        // }
        // return -1;
        
         for(int i = 0; i < nums.size(); i++)
           {
               int index = nums[i] % nums.size();
               nums[index] += nums.size();
           }
           for(int i = 0; i < nums.size(); i++)
           {
               if(nums[i] >= 2*nums.size())
                   return i;
           }
           return 0;
    }
};
