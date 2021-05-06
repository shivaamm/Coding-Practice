class Solution
{
    public:
        int countWords(string s[], int n)
        {
            
          unordered_map<string,int>mp;
          
          for(int i=0;i<n;i++)
          {
              mp[s[i]]++;
          }
          int count=0;
          for(auto it=mp.begin() ; it != mp.end() ; it++)
          {
    	       if(it->second == 2)
    	            count++;
              
            }  
        return count;
        
        
        ***************************************************************************************************
        
            
            // incase of vector here v is vector
            // unordered_map<string, int> mp(v.size());
            // for (auto& i : v) {
            //     ++mp[i];
            // }
            // int count = 0;
            // for (auto& i : mp) {
            //     if (i.second == 2) {
            //         count++;
            //     }
            // }
            // return count;
    
    }
        
        
};
