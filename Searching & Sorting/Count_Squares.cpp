class Solution {
  public:
    int countSquares(int N) {
        int c=0;
        for(int i=1;i<sqrt(N);i++)
        {
            if(i*i<N)
                c++;
        }
        return c;
    }
};
