class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // dp[i] is going to store maximum value
        // with knapsack capacity i.
        int dp[W+1];
        memset(dp, 0, sizeof dp);
     
        // Fill dp[] using above recursive formula
        for (int i=0; i<=W; i++)
          for (int j=0; j<N; j++)
             if (wt[j] <= i)
                dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
     
        return dp[W];
    }
};
