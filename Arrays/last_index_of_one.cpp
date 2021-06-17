class Solution{
    public:
    int lastIndex(string s) 
    {
       
        int flag=0;
        int ind=0;
        for(int i=0;i<s.length();i++)
         {
             if(s.at(i)=='1'){
                ind=i;
                flag=1;
             }
         }
         if(flag==1)
         return ind;
         else
         return -1;
    }

};
