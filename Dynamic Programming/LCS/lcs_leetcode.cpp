class Solution {
public:
    
     int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length(), m=text2.length();
       
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));   /////////  initialization in vector
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }
  
  
  /////////////////////////************************/////////////////////////////////////////*****************************////////////////////////////////////
   
  
    int longestCommonSubsequence(string s1, string s2) {
        int x=s1.length(), y=s2.length();
        int t[x+1][y+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<x+1;i++)
        {
            for(int j=0;j<y+1;j++)
            {
                if(i==0||j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<x+1;i++)
        {
            for(int j=1;j<y+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
        return t[x][y];
    }
};
