class Solution{
public:	
	bool balancedNumber(string n)
	{
	    int s=n.length();
	    if(s%2==0)
	        return 0;
	    int sum1=0,sum2=0;
	    int l=0,r=s-1;
	  int mid=(l+r)/2;
        for(int i=0;i<mid;i++)
        {
            sum1+=n[i];
        }
        for(int i=mid+1;i<=r;i++)
    	  {
    	    sum2+=n[i];  
    	  }
    	if(sum1==sum2)
    	    return 1;
        else 
            return 0;
	}
};
