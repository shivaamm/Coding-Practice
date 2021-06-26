class Solution {
  public:
    int isDisarium(int n) {
        int cnt=0,sum=0;
	    int k=n;
	    while(k>0)
	    {
	        k=k/10;
	        cnt++;
	    }
	    int x=n;
	    while(x)
	    {
	        int r=x%10;
	        sum+=pow(r,cnt--);
	        x=x/10;
	    }
	    if(sum==n)
	        return 1;
	    else
	        return 0;
    }
};
