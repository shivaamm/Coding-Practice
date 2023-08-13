class Solution {
  public:
        long long int mod = 1000000007;
        int nthFibonacci(int n){
        int ans[n];
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2; i<=n+1; i++){
            ans[i] = ((ans[i-2])%mod + (ans[i-1])%mod)%mod;
        }
        return ans[n];
    }
};
