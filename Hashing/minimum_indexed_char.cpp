class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	    unordered_set<char>s(patt.begin(), patt.end());      // if storing values like this then no need to use s.insert()
	 
	   // for(int i=0;i<str.size();i++)
	   // {
	   //     s.insert(str[i]);
	   // }
	    for(int i=0;i<str.size();i++)
	    {
	        if(s.find(str[i])!=s.end())
	            return {str[i]};
	    }
	    return {"$"};
	   
	   
	   ***************************************************************************************************************
	   
	   //string c = "$";
	   // for(int i=0; i<str.size(); i++) {
	   //     if(patt.find(str[i]) != string::npos)  {
	   //         c = str[i];
	   //         return c;
	   //     }
	   // }
	   //     return c;
	   
	   ***************************************************************************************************************
	   
	   int i;
        for(i=0;i<str.size();i++)
        {
            if(patt.find(str[i])!=string::npos)
            {
                string s(1,str[i]);
                return s;
            }
        }
    	return "$";
    	
    	
	        
	}
};
