https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
       int totalSum = (size * (size+1)) /2;
       int arrSum = 0;
       for (int i = 0; i <size; i++) 
           arrSum += nums[i];
       
       return totalSum - arrSum;
    }
};
