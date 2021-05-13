class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;
        for(int itr = 0; itr < nums.size(); itr += 2){
            result += nums[itr];
        }
        return result;
    }
};

// Time Complexity = O(NLogN), Space Complexity = O(1)
