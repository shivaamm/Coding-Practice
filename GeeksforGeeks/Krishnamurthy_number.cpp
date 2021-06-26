class Solution {
  public:
    string isKrishnamurthy(int n) {
        int fact=1;
        int sum=0;
        int r,temp;
	    temp=n;
	    while(n!=0)
	    {
	        r=n%10;
	        for(int i=1;i<=r;i++)
	        {
	        fact=fact*i;
	        }
	        n=n/10;
	        sum=sum+fact;
	        fact=1;
	    }
	    if(sum==temp)
	    return "YES";
	    else
	    return "NO";
    }
};
