class Solution{
  public:
    string caseConversion(string str){
        
        // for(int i=0;i<str.length();i++)
        // {
        //     int c= (int)str[i];
        //     if(c>=65 && c<=90)
        //     {
        //         c=c+32;
        //         char cc=(char)c;
        //         str[i]=c;
        //     }
        // }
        // return str;
        
        
        *****************************************************************
             
        
        // for(int i=0;i<str.size();i++)
        // {
        //     if(str[i]<=90)
        //     {
        //          str[i]=str[i]+32;
        //     }
        // }
        // return str;
        
        
        *****************************************************************
        
        
        for (int i=0; str[i]!='\0'; i++)
         str[i] = str[i] | 32;
  
         return str;
        
        
        *****************************************************************
        
        
        // transform(str.begin(), str.end(), str.begin(), ::tolower);
        // return str;
        
    }
};
