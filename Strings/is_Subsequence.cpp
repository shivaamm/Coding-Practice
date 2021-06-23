class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (char c : t) {
            if (i == s.size()) 
                return true;
            if (c == s[i]) 
                ++i;
        }
        return i == s.size();
      
      
      //////////////////////////////////////////////////////
        
//         int i=0,j=0;
        
//         int n=s.size();
//         int m=t.size();
//         while(i<n&&j<m){
//             if(s[i]==t[j]) {i++; j++;}
//             else j++;
//         }
  
//          return i==n;
      
      //////////////////////////////////////////////////////
      
    }
};
