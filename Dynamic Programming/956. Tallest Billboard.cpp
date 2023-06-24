class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int sum = 0;
        for (int rod : rods) {
            sum += rod;
        }

        int dp[sum + 1];
        dp[0] = 0;

        // Initialize all other elements in dp[] to -1
        for (int i = 1; i <= sum; i++) {
            dp[i] = -1;
        }

        for (int rod : rods) {
            int dpCopy[sum + 1];
            // Copy the current state of dp[] to dpCopy[]
            copy(dp, dp + (sum + 1), dpCopy);

            for (int i = 0; i <= sum - rod; i++) {
                if (dpCopy[i] < 0) continue;

                // Case 1: Place the current rod on the same height billboard
                dp[i + rod] = max(dp[i + rod], dpCopy[i]);

                // Case 2: Place the current rod on the taller billboard
                // Calculate the absolute difference between current height and rod length
                dp[abs(i - rod)] = max(dp[abs(i - rod)], dpCopy[i] + min(i, rod));
            }
        }

        // Return the maximum height of the billboard stored at dp[0]
        return dp[0];
    }
};
