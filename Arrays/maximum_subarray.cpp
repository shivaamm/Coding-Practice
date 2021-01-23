https://leetcode.com/problems/maximum-subarray/
/*
KADANE'S ALGO

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, maximum = INT_MIN;
        for(int item : nums){
            curr += item;
            if(curr > maximum) 
                maximum = curr;
            if(curr <= -1) curr = 0;
        }
        return maximum;
    }
};
