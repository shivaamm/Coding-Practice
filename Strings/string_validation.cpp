bool validate(string s)
{
   bool a = s.length() >=10 ? true: false;
   bool b = false,C=false,d=false,e = false;

   for(char c : s)
   {
        if(c-'0' >=0 && c-'0' <=9)
            b = true;
        if(int(c) >=65 && int(c)<=90)
            C = true;
        if(int(c)>=97 && int(c)<=122)
            d = true;
        if(c == '@' || c == '#' || c == '$' || c == '-' || c == '*')
            e = true;
   }
 
   return (a && b && C && d && e);
   
}
