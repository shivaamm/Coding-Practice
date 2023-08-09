class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        long long ans;
        for(int i=2;i*i<=N;i++)
        {
            while(N%i==0)
            {
                ans = i;
                N /= i;
            }
        }
        if(N>1)
        {
            ans = N;
        }
        return ans;
    }
    
};
