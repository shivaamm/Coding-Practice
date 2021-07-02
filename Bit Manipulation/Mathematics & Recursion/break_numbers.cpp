class Solution{
public:
    long long countWays(long long N){
         if(N<3){
            return N;
        }
        return (N+1)*(N+2)/2 ;
    }
};
