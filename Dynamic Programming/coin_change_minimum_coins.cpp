https://leetcode.com/problems/coin-change/
https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#

///////////////////////////////////////////////////   leetcode        //////////////////////////////////////////////////////


class Solution {
public:
    int coinChange(vector<int>& nums, int amount) {
        int n=nums.size();
	    int t[n+1][amount+1];
	    
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<amount+1;j++)
	        {
	            if(i==0)
	            {
	                t[i][j]=INT_MAX-1;
	            }
	           if(j==0 && i==1|| j==0)
	           {
	               t[i][j]=0;
	           }
	           if(i==1)
	           {
	               if(j%nums[0]==0)
	               {
	                   t[i][j]=j/nums[0];
	               }
	               else
	               {
	                   t[i][j]=INT_MAX-1;
	               }
	           }
	        }
	    }
	    for(int i=2;i<n+1;i++)
	    {
	        for(int j=1;j<amount+1;j++)
	        {
	            if(nums[i-1]<=j)
	            {
	                t[i][j]=min(1+t[i][j-nums[i-1]],t[i-1][j]);
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    if(t[n][amount]==INT_MAX-1)
	    {
	        return -1;
	    }
	    return t[n][amount];
    }
};


******************************************* even without doing the initialization for 2nd row code will work  ***************************************


int coinChange(vector<int>& coins, int amount) 
    {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        for(int i=0;i<=amount;i++)
        {
            dp[0][i]=INT_MAX-1;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][amount]>=INT_MAX-1?-1:dp[n][amount];
    }




///////////////////////////////////////////////////////////////  GFG   ///////////////////////////////////////////////////////////////////////////


class Solution{

	public:
// 	int minCoins(int coins[], int M, int V) 
	int minCoins(int nums[], int n, int amount) 
	{ 
	   //int n=nums.size();
	    int t[n+1][amount+1];
	    
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<amount+1;j++)
	        {
	            if(i==0)
	            {
	                t[i][j]=INT_MAX-1;
	            }
	           if(j==0 && i==1|| j==0)
	           {
	               t[i][j]=0;
	           }
	           if(i==1)
	           {
	               if(j%nums[0]==0)
	               {
	                   t[i][j]=j/nums[0];
	               }
	               else
	               {
	                   t[i][j]=INT_MAX-1;
	               }
	           }
	        }
	    }
	    for(int i=2;i<n+1;i++)
	    {
	        for(int j=1;j<amount+1;j++)
	        {
	            if(nums[i-1]<=j)
	            {
	                t[i][j]=min(1+t[i][j-nums[i-1]],t[i-1][j]);
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    if(t[n][amount]==INT_MAX-1)
	    {
	        return -1;
	    }
	    return t[n][amount];
	} 
	  
};


///////////////////////////////////////////////////////////////  GFG   ///////////////////////////////////////////////////////////////////////////

**********************************************************   OTHER WAY  *************************************************************

class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long minimumNumberOfCoins(int coins[],int m,int V)
    {
       // table[i] will be storing the minimum number of coins
        // required for i value.  So table[V] will have result
        int table[V+1];
     
        // Base case (If given value V is 0)
        table[0] = 0;
     
        // Initialize all table values as Infinite
        for (int i=1; i<=V; i++)
            table[i] = INT_MAX;
     
        // Compute minimum coins required for all
        // values from 1 to V
        for (int i=1; i<=V; i++)
        {
            // Go through all coins smaller than i
            for (int j=0; j<m; j++)
              if (coins[j] <= i)
              {
                  int sub_res = table[i-coins[j]];
                  if (sub_res != INT_MAX && sub_res + 1 < table[i])
                      table[i] = sub_res + 1;
              }
        }
       
          if(table[V]==INT_MAX)
            return -1;
       
        return table[V];
    }
};
