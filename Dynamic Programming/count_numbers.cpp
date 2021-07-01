class Solution {
  public:
    int countNumberswith4(int n) {
        // int ct=0;
        // for(int i=1;i<=n;i++){
        //     if(to_string(i).find('4')!=string::npos)
        //     ct++;
        // }
        // return ct;
        
        
        //////////////////////////////////////////////////// using dp /////////////////////////////////////////////////
        
        int count=0;
	    int dp[n+1];
	    
	    for(int i=0;i<n+1;i++)
	    {
	        dp[i]=0;
	    }
	    
	    for(int i=1;i<n+1;i++)
	    {
	        int digit=i%10;
	        int no=i/10;
	        if(dp[no]>0||digit==4)
	        {
	            count++;
	            dp[i]=1;
	        }
	        
	    }
	    return count;
	    
    }
};
