class Solution{
  public:
    int cutRod(int price[], int n) {
       int t[n+1];
        int i,j;
        for(i=0; i<=n; i++)
            t[i] = 0;
        for(i=1; i<=n; i++) {
            for(j=1; j<=i; j++) {
                t[i] = max(t[i], price[j-1] + t[i-j]);
            }
        }
        return t[n];
    }
};
