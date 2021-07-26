A number is a perfect number if is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself. 
Write a function to check if a given number is perfect or not. 

class Solution {
  public:
    int isPerfectNumber(long long n) {
        
        // time comp = O(N)
        
    //      long long sum=0,i=1;
    //     while(i<n){
    //         if(n%i==0)
    //         sum=sum+i;
    //         i++; 
    //     }
    //   if(sum==n)
    //     return 1;
    //     else
    //     return 0;
    
    
    // time comp = O(sqrt(N))
    
    // To store sum of divisors
    long long int sum = 1;
  
    // Find all divisors and add them
    for (long long int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     // If sum of divisors is equal to
     // n, then n is a perfect number
      if(sum == n && n != 1)
        return 1;
        else
        return 0;
    }
};
