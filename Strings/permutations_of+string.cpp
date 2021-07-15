class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    vector<string>v;
		   sort(s.begin(),s.end());
    	    do
    	    {
    	        v.push_back(s);
    	    }
    	    while(next_permutation(s.begin(),s.end()));
    	    
    	    return v;
		}



  **********************************************************************************
  
  
		void helper(string s, int i, vector <string> &ans) {
	        
	        if(i == s.size()) {
	            ans.push_back(s);
	        }
	        
	        for(int j=i;j<s.size();j++) {
	            swap(s[i], s[j]);
	            helper(s, i+1, ans);
	            swap(s[i], s[j]);
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector <string > ans;
		    helper(S, 0, ans);
		    
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

