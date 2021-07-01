class Solution{
public:

    // int solve(string a,string b,int i,int j){
    //     if(j==b.size())return 1;
    //     if(i==a.size())return 0;
    //     int ans=0;
    //     if(a[i]==b[j])
    //     ans+=solve(a,b,i+1,j+1);
    //     ans+=solve(a,b,i+1,j);
    //     return ans;
        
    // }
    
    // int countWays(string S1, string S2){
    //     return solve(S1,S2,0,0);
    // }
    
    
    /////////////////////////////////////////////////////////// using dp ////////////////////////////////////////////////////////////////////
    
    
    int countWays(string s1, string s2){
        
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};
