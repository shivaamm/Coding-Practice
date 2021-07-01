class Solution {
public:
     //This question is same as count of number of subsets with given difference
    int countSubsets(vector<int>& nums, int n, int M)
    {
        int t[n + 1][M + 1];
        
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= M; j++)
            {
                if(i == 0)
                    t[i][j] = 0;
                if(j == 0)
                    t[i][j] = 1;
            }
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j <= M; j++)
            {
                if(nums[i - 1] <= j)
                 t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                else
                  t[i][j] = t[i - 1][j];
            }
        }
        
        return t[n][M];
    }
    
    int findTargetSumWays(vector<int>& nums, int target)
     {
         int n = nums.size();
         int sum = 0;
         for(int i = 0; i < n; i++)
             sum += nums[i];
         
         int M = (sum + target)/2;
        if(sum < target || (sum + target) % 2 != 0)
            return 0;
         return countSubsets(nums, n, M);
     }
    
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n=nums.size();
//         int sum = accumulate(nums.begin(), nums.end(), 0);
        
//         // CORNER CASES
//         if( sum < target or (sum + target) % 2 != 0)
//             return 0;
        
//         // MANIPULATION into subset sum
//         // s1 + s2 = sum
//         // s1 - s2 = target
//         // => s1 = (sum+target) / 2
        
//         sum = (sum+target)/2;
        
//         //SUBSET SUM...count instead of TRUE/FALSE...use ADD instead of OR
//         vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
        
//         for(int i=0; i<=n; i++)
//             dp[i][0] = 1;
        
//         for(int i=1; i<=n; i++){
//             //start j from 0...as nums[] has zeroes in it
//             for(int j=0; j<=sum; j++){
//                 dp[i][j] = dp[i-1][j];
//                 if(nums[i-1] <= j)
//                     dp[i][j] += dp[i-1][j-nums[i-1]];
//             }
//         }
        
//         return dp[n][sum];
//     }
    
};
