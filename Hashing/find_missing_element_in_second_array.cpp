class Solution{
	
	
	public:
	vector<long long> findMissing(long long ar1[], long long ar2[],  
                 int n, int m) 
	{ 
	    vector<long long>v;
	    unordered_set<long long>s;
	    
	    for(long int i = 0;i<m;i++)
	    {
	        s.insert(ar2[i]);
	    }
	    for(long int i = 0;i<n;i++)
	    {
	        if(s.find(ar1[i]) == s.end())
	        {
	            v.push_back(ar1[i]);
	        }
	    }
	    return v;
	    
	} 
};
