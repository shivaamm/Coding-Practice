class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        vector<long long int> prev(sum+1,0),curr(sum+1);
        
        for(int i = 1; i <= N; i++){
            for(int j = 0; j <= sum; j++){
                if(j == 0) curr[j] = 1LL;
                else{
                    if(coins[i-1] <= j) curr[j] = curr[j - coins[i-1]] + prev[j];
                    else curr[j] = prev[j];
                }
            }
            prev = curr;
        }
        
        return curr[sum];
    }
};
