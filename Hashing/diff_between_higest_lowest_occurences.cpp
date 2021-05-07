class Solution{
  public:
    int findDiff(int a[], int n) {
        map<int,int> m;
	    
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }
	    int mi=INT_MAX,ma=INT_MIN,result;
	   for(auto it=m.begin();it!=m.end();it++)
	   {
	       mi=min(mi,it->second);
	       ma=max(ma,it->second);
	   }
	   result=ma-mi;
	   return result;
    }
};
