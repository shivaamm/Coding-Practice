class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	    string c = "$";
	    for(int i=0; i<str.size(); i++) {
	        if(patt.find(str[i]) != string::npos)  {
	            c = str[i];
	            return c;
	        }
	    }
	        return c;
	        
	   //std::unordered_set<char> us(patt.begin(), patt.end());
    //     for (int i = 0; i < str.size(); ++i) {
    //       if(us.find(str[i]) != us.end()) 
    //           return {str[i]};
    //     }
    //     return {"$"};
    
    
    // 	int a[256]={0};
    // 	for(int i=0;i<patt.length();i++)
    // 	a[patt[i]-'\0']++;
    // 	for(int i=0;i<str.length();i++)
    // 	if(a[str[i]-'\0'])
    // 	{
    // 	    string s(1,str[i]);
    // 	    return s;
    // 	}
    // 	return "$";
	}
};
