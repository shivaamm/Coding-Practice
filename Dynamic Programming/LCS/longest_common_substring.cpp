https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1
https://leetcode.com/problems/maximum-length-of-repeated-subarray/

////////////////////////////////////////////////            GFG                  //////////////////////////////////////////////////////////

class Solution{
    public:
    
      int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        
        int t[n+1][m+1];
       memset(t,-1,sizeof(t));
       int ans=0;
        
        //INITIALISATION
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                    t[i][j] =  t[i-1][j-1] +1;
                    ans=max(ans,t[i][j]);
                }
                else
                {
                    t[i][j]=0;  
                }
            }
        }
        
        return ans;
    }
};




////////////////////////////////////////////////            LEETCODE    (VECTOR INITIALIZATION)               //////////////////////////////////////////////////////////


class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n== 0 || m == 0) return 0; // base case
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); // dp vector
        int max_ =0; // to store max value
        for(int i=1; i<=n; i++){
            for(int j =1; j<=m; j++){
               
                if(nums1[i-1] != nums2[j-1]){
                    dp[i][j] =0; 
                }
                else{ // nums1[i-1] == nums2[j-1]
                    dp[i][j] = dp[i-1][j-1] +1;
                }
                if(dp[i][j] > max_) max_ = dp[i][j]; //update max value
            }
        }
        return max_;
      
      
      ***********************************************************************************************************
        
        
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

