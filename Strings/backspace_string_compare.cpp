class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k=0,p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                k--;
                 k=max(0,k);
            }
            
           else
           {
               s[k]=s[i];
               k++;
           }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                p--;
                 p=max(0,p);
            }
            
           else
           {
               t[p]=t[i];
               p++;
           }
        }
        if(k!=p)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
        
    }
};



*********************************** using Stack **************************************

class Solution {
public:
    bool backspaceCompare(string S, string T) {
            
         stack <int> s1,s2;
         string str1,str2; 
            
         for(int i = 0; i < S.size(); i++){
                 
                 if(S[i] == '#' && !s1.empty())
                         s1.pop();
                 
                 else if(S[i] != '#')
                         s1.push(S[i]);
                 
         }
         
         for(int i = 0; i < T.size(); i++){
                 
                 if(T[i] == '#' && !s2.empty())
                         s2.pop();
                 
                 else if(T[i] != '#')
                         s2.push(T[i]);
                 
         }
            
         while(!s1.empty()){
                 
                 str1.push_back(s1.top());
                 s1.pop();
                 
         }
            
         while(!s2.empty()){
                 
                 str2.push_back(s2.top());
                 s2.pop();
                 
         }      
            
         return str1 == str2;   
    }
};
