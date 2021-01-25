class Solution {
  public:
    string removeChars(string s1, string s2) {
        for(int i = 0;i<s1.length();)
	    {
	        while(s2.find(s1[i])!= string::npos)
	            s1.erase(i,1);
	       i++;     
	            
	    }
	    return s1;
    }
};


// 2nd approach
// for(int i=0;i<s2.size();i++)
//         s1.erase(remove(s1.begin(),s1.end(),s2[i]), s1.end());
