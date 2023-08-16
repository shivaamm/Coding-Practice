class Solution
{
    const int MOD = 1000000007;
    public:
    int findCatalan(int N) 
    {
        vector<int> catalan(N + 1, 0);
        catalan[0] = 1;
    
        for (int i = 1; i <= N; ++i) {
            for (int j = 0; j < i; ++j) {
                catalan[i] = (catalan[i] + (1LL * catalan[j] * catalan[i - j - 1]) % MOD) % MOD;
            }
        }

        return catalan[N];
       
    }
};
