class Solution {
public:
    int c(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<=j;k++){
            int h=cuts[j+1]-cuts[i-1]+c(i,k-1,cuts,dp)+c(k+1,j,cuts,dp);
            ans=min(ans,h);
        }
         return dp[i][j]=ans;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(cuts.size(),vector<int>(cuts.size(),-1));
        return c(1,cuts.size()-2,cuts,dp);
    }
};
