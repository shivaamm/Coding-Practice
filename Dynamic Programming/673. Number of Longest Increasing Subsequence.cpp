class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> dp(n, 1); 
        int maxLength = 1; 
        int result = 0; 

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                    }
                }
            }
            maxLength = max(maxLength, dp[i]);
        }

        for (int i = 0; i < n; i++) {
            if (dp[i] == maxLength) {
                result++;
            }
        }

        return result;
    }
};
