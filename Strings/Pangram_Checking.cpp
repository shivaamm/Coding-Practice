class Solution
{
    public:
    
    // const int CHAR=256;
    bool checkPangram (string &str)
    {
        // unordered_map<char,int>map;
        // int s=str.size(),t=0;
        // for(int i=0;i<s;i++)
        //     map[str[i]]++;
        // unordered_map<char,int>::iterator it;
        // for(it=map.begin();it!=map.end();it++)
        // {    if((it->second)>0)
        //             t++;
        // }
        // if(t>=26)
        //     return 1;
        // else return 0;
        
      *******************************************************
      
        // if(str.size()<26)return false;
        // int count[CHAR]={0};            // const int CHAR=256; (add this line to declare char in global) otherwise it will throw error.
        // for(char c:str){
        //     if(isalpha(c)){
        //         count[tolower(c)]++;
        //     }
        // }
        // for(int i=97;i<=122;i++){
        //     if(count[i]==0)
        //     return false;
        // }
        // return true;
        
       ******************************************************
        
        int i;
        int h[26]={0};
        
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for(i=0; i<str.length(); i++){
            h[str.at(i)-'a']++;
        }
            for(i=0; i<26;i++){
                if(h[i]==0) 
                return false;
            }
            return true; 
    }

};
