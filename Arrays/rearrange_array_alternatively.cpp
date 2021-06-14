class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
	   int min_id=0,max_id=n-1;
       long long max=arr[n-1]+1;
       for(int i=0;i<n;i++)
       {
           
           if(i%2==0)
           {
               arr[i]+= (arr[max_id]%max)*max;
               max_id--;
           }
           else
           {
               arr[i]+=(arr[min_id]%max)*max;
               min_id++;
           }
           
           
       }
       
       for(int i=0;i<n;i++)
         arr[i]=arr[i]/max;
    	 
    	 
    }
};
