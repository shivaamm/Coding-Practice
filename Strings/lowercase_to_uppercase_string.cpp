class Solution{
  public:
    string caseConversion(string str){
        
        // for(int i=0;i<str.length();i++)
        // {
        //     int c= (int)str[i];
        //     if(c>=97 && c<=122)
        //     {
        //         c=c-32;
        //         char cc=(char)c;
        //         str[i]=c;
        //     }
        // }
        // return str;
        
        
        ******************************************************************
           
        // for(int i=0;i<str.size();i++)
        // {
        //     if(str[i]<=90)
        //     {
        //         continue;
        //     }
        //     str[i]=str[i]-32;
        // }
        // return str;
        
        
        ************************************  Using bitwise Inversion  ******************************
        
        for (int i = 0; i < str.length(); i++)
          if ('a' <= str[i] <= 'z')
              str[i] &= ~(1 << 5);     // used here (~)inversion and (<<) left shift to move bits
        return str;
        
    }
};
