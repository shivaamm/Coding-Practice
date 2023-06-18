class Solution {
  public:
    int distributeTicket(int N, int K) {
        int begin = 1;
        int end = N;
        while(begin < end) {
           int i = K;
           while(begin < end && i--) begin++;
           i = K;
           while(begin < end && i--) end--;
        }
        return begin;
    }
};
