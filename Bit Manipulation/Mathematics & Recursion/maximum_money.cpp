class Solution {
  public:
    int maximizeMoney(int N , int K) {
        int a;
        if(N%2!=0)
            a=N/2+1;
        else
            a=N/2;
        return a*K;
    }
};
