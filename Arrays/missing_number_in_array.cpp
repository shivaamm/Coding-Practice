class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {

        long long ans= (n*(n+1))/2;
        long long sum=0;
        
        for(long long i=0;i<n-1;i++)       // Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N.  
        {                                   // (loop will only run till n-1)
            sum+=a[i];
        }
        return ans-sum;
        
        
        **********************************************************
        
        
    //      int vis[n+1]={0};
    //      int ans=0;
	   // for(int i=0;i<n-1;i++)
	   // {
	   //     vis[a[i]]=1;
	   // }
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(vis[i+1]==0)
	   //     {
	   //         ans=i+1;
	   //         break;
	   //     }
	   // }
	   // return ans;
	   
	   
	 
    }
};
