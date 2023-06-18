class Solution {
public:
    
    int Helper(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp, int prev)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || prev>=grid[i][j])
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int top =  Helper(grid,i-1,j,dp,grid[i][j]);
        int bottom =  Helper(grid,i+1,j,dp,grid[i][j]);
        int right = Helper(grid,i,j+1,dp,grid[i][j]);
        int left =  Helper(grid,i,j-1,dp,grid[i][j]);
        
        dp[i][j] = (1 + top + bottom + right + left)%1000000007; // it will give signed integer overflow run time error if you do not modulo at this point of code
        return dp[i][j];
    }
    int countPaths(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        if(m==1 && n==1)
            return 1;
        vector<vector<int> > dp(m,vector<int> (n,-1));
        
        int ans =0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]==-1)
                  ans = (ans + Helper(grid,i,j,dp,-1))%1000000007;
                else
                  ans = (ans + dp[i][j])%1000000007;
            }
        }
        
        return ans;
    }
};
