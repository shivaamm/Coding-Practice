class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        vector<vector<int>>dp(A.size()+1, vector<int>(B.size()+1));
        int maxNum = 0;
        for (int i = 1; i <= A.size(); ++i) 
            for (int j = 1; j <= B.size(); ++j) 
                if (A[i-1] == B[j-1]) {
                    dp[i][j] = dp[i-1][j-1]+1;
                    maxNum = max(maxNum,dp[i][j]);
                }
        return maxNum;
    }
};


Input: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
Output: 3
Explanation: The repeated subarray with maximum length is [3,2,1].
Example 2:

Input: nums1 = [0,0,0,0,0], nums2 = [0,0,0,0,0]
Output: 5
