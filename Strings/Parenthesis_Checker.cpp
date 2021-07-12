class Solution
{
    public:
    bool compare(char a,char b)
    {
        
        return ((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
        
    }
    
    bool ispar(string x)
    {
     stack<int> st;
     for(int i=0;i<x.length();i++)
     {
         if(x[i]=='('||x[i]=='{'||x[i]=='[')
           {
               st.push(x[i]);
            }
         if(x[i]==')'||x[i]=='}'||x[i]==']')
         {
             if(st.empty()==true)
               return false;
             
             if(compare(st.top(),x[i]))
             {
                 st.pop();
             }
             else
               return false;
                
         }
         
     }
     return st.empty();
    }
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expr)
    {
        stack<char> s;
        char x;
     
        // Traversing the Expression
        for (int i = 0; i < expr.length(); i++)
        {
            if (expr[i] == '(' || expr[i] == '['
                || expr[i] == '{')
            {
                // Push the element in the stack
                s.push(expr[i]);
                continue;
            }
     
            // IF current current character is not opening
            // bracket, then it must be closing. So stack
            // cannot be empty at this point.
            if (s.empty())
                return false;
     
            switch (expr[i]) {
            case ')':
                 
                // Store the top element in a
                x = s.top();
                s.pop();
                if (x == '{' || x == '[')
                    return false;
                break;
     
            case '}':
     
                // Store the top element in b
                x = s.top();
                s.pop();
                if (x == '(' || x == '[')
                    return false;
                break;
     
            case ']':
     
                // Store the top element in c
                x = s.top();
                s.pop();
                if (x == '(' || x == '{')
                    return false;
                break;
            }
        }
     
        // Check Empty Stack
        return (s.empty());
        }

};
