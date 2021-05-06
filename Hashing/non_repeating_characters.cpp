class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
    
        int flag = 0;
        int n=s.size();
	    vector<int>a(256, 0);                    // using vector
	    for(int i = 0; i < n; i++) 
	        a[s[i]]++;
	    for(int i = 0; i < n; i++)
	    {
	        if(a[s[i]] == 1)
	        {
	            flag = 1;
	            return s[i];
	            break;
	        }
	    }
	    if(flag == 0)
    	    return '$';
    	    
    	    
          ***********************************************  using map and set  ***********************************************
    	    
    	    
    // 	 map<char,ll> mp;
	   // for(i=0;i<s.size();i++)
	   // {
	   //     mp[s[i]]++;
	   // }
	   // set<char>se;
	   // for(auto itr=mp.begin();itr!=mp.end();itr++)
	   // {
	   //     if(itr->second==1)
	   //     se.insert(itr->first);
	        
	   // }
	   // for(i=0;i<s.size();i++)
	   // {
	   //     if(se.find(s[i])!=se.end())
	   //     {
	   //         break;
	   //     }
	   // }
	   // if(i!=s.size())
	   // cout<<s[i]<<endl;
	   // else
	   // cout<<-1<<endl;
	   
	   
     **********************************************  using brute force  ************************************************
     
	   
	   //int a[26];
    //      for(int i=0;i<26;i++)
    //      a[i]=0;
    //      for(int i=0;i<n;i++)
    //      {
    //          a[str[i]-'a']++;
    //      }
    //      int z=0;
    //      for(int i=0;i<n;i++)
    //      {
    //          if(a[str[i]-'a']==1)
    //          {
    //              z=1;
    //              cout<<str[i]<<"\n";
    //              break;
    //          }
    //      }
    //      if(z==0)
    //      cout<<"-1\n";
       
    }

};
