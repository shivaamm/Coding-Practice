class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        int j=0,k=n- 1;
    	long long max=arr[n- 1]+ 1;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i]=max*(arr[k]%max) +arr[i];
    	        k--;
    	    }
    	    else
    	    {
    	        arr[i]=max*(arr[j]%max) +arr[i];
    	        j++;
    	    }
    	    
    	}
    	for(int i=0;i<n;i++)
    	arr[i]=arr[i]/max;
    }
};
