class Solution{
public:	
		
	string removeDups(string s) 
	{
	   // string r="";
	   // map<char,int> mp;
	   // mp.clear();
	   // int n=s.length();
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(!mp[s[i]])
	   //     {
	   //         r+=s[i];
	   //         mp[s[i]]=1;
	   //     }
	   // }
	   //return r;
	   
	   vector<int> v(256,0);
	    string s2;
	    for(int i=0;i<s.size();i++){
	        if (v[s[i]]) continue;
	        else{
	            s2.push_back(s[i]);
	            v[s[i]]++;
	        }
	    }
	    return s2;
	}
};
