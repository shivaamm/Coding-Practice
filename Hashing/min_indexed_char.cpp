class Solution
{
    public:
    //Function to find the minimum indexed character.
    
    const int CHAR=256;
    int minIndexChar(string str, string patt)
    {
        
       vector<int>m(CHAR,-1);
   
       int res=INT_MAX;
       for(int i=0;i<str.size();i++){
           if(m[str[i]]==-1)
           m[str[i]]=i;
       }
       
       for(int i=0;i<patt.size();i++){
           if(m[patt[i]]!=-1){
              res=min(res,m[patt[i]]);
           }
       }
       if(res!=INT_MAX)
       return res;
       return -1;
       
    }
};
