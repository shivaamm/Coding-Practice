class Solution {
public:
    
     int LCS(string a, string b)
    {
        int n = a.size();
        int m = b.size();

        int dp[n+1][m+1];

        memset(dp, 0, sizeof(dp));

        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
            {
                if(a[i-1] == b[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    
    int minInsertions(string s) {
         string a = s;
        string b = a;
        int num=s.length();
        reverse(b.begin(), b.end());

        int ss = LCS(a,b);
        return num-ss;
    }
};
