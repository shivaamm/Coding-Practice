class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        int mask=0xAAAAAAAA;
              n=n&mask;
              return n;
        
    }
};
