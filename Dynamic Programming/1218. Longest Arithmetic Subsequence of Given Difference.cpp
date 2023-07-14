class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map<int, int> dp; // Stores the maximum length at each index
        
        int ans = 1; // Initialize with the minimum length of 1
        
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            if (dp.find(num - difference) != dp.end()) {
                dp[num] = dp[num - difference] + 1;
            } else {
                dp[num] = 1;
            }
            
            ans = max(ans, dp[num]);
        }
        
        return ans;
    }
};
