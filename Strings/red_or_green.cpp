class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int c1=0,c2=0;
           for(int i=0;i<N;i++)
           {
               if(S[i]=='R')
               c1++;
               else
               c2++;
           }
           if(c1>c2)
           return c2;
           else
           return c1;
    }
};
