class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    long long int sum=0;
	    for(int i=1; i<=n; i++){
	        sum=sum+floor(n/i)*i;
	    }
	    return sum;
	}  
};
