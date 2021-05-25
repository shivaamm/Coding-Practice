typedef long long int ll;

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        ll dp[n];
        if(n==0)
            return 0;
        dp[0]=arr[0];
        if(n==1)
            return arr[0];
        dp[1]=max(arr[0],arr[1]);
        if(n==2)
            return dp[1];
        for(ll i=2;i<n;i++){
            dp[i]=max(dp[i-1], arr[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};


Input:
n = 6
a[] = {5,5,10,100,10,5}
Output: 110
Explanation: 5+100+5=110
