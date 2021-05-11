class Solution{   
public:
    int totalCount(int a[], int n, int k) {
        int sum=0;
        for(int i=0;i<n;i++)
	    {
	        if(a[i]>k)
	        {
	          int x=a[i]/k; 
	          if(a[i]%k==0)
	            sum=sum+x;
	          else
	            sum=sum+x+1;
	         
	        }
	        else if(a[i]<=k)
	            sum++;
	        
	    }
	    return sum;
	    
    }
};
