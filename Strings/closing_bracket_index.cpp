class Solution
{
    public:
        int closing (string s, int pos)
        {
        //     stack<char> st;
    	   // for(int i=pos;i<s.length();i++)
    	   // {
    	   //     if(s[i]=='[')
    	   //     st.push('[');
    	   //     else if(s[i]==']')
    	   //     {
    	   //         st.pop();
    	   //         if(st.empty())
    	   //         {
    	   //             return i;
    	   //             break;
    	   //         }
    	   //     }
    	   // }
    	   
         
         **********************************************************
    	   
    	   int i,x=1;
    	   for( i=pos+1;i<s.length()&&x;i++)
    	    {
    	        x+=(s[i]=='[');
    	        x-=(s[i]==']');
    	    }
    	   // cout<<i-1<<"\n";
    	   return i-1;
        }
};
