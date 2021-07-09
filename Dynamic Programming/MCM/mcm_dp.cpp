class Solution
{
public:
    int  dp[1001][1001];
    int matrixChainMemoised(int p[], int i, int j)
    {
        if (i==j) return 0;
        if (dp[i][j]!=-1) 
          return dp[i][j];
      
        dp[i][j] = INT_MAX;
        for (int k = i; k < j; k++)
        {
            dp[i][j] = min(dp[i][j] , matrixChainMemoised(p, i, k)  +
                                      matrixChainMemoised(p, k + 1, j)  +
                                      p[i-1]*p[k]*p[j]);
        }
        return dp[i][j];
    }
    int matrixMultiplication(int n, int p[])
    {
         memset(dp, -1, sizeof dp);
        return matrixChainMemoised(p,1,n-1);
    }
};
