class Solution{
public:
    string remove(string str){
        
        int n = str.length();
        string temp;
        
        if(str[0]!=str[1])
        {
            temp += str[0];
        }
        int i=1;
        while(i<n)
        {
            if(str[i]!=str[i-1] && str[i]!=str[i+1])
            {
               temp += str[i];
                //cout<<"current temp string: "<<temp<<endl;
            }
            i++;
        }
        
        if(temp.length()==0)
        {
            return temp;
        }
        if(temp.length()!=str.length())
        {
            return remove(temp);
        }
        return temp;
        
    }   
        
        ********************************************************************************************************
        
        // gives TLE
        
        // int n=s.length();
        // string t;
        // int i=1;
        // if(s[0]!=s[1]){
        //     t+=s[0];
        // }
        // while(i<n){
        //     if(s[i]!=s[i-1]&&s[i+1]!=s[i]){
        //         t+=s[i];
        //     }
        //     i++;
        // }
        // if(t.size()!=s.size()){
        //     return remove(t);
        // }
        // return t;
    
};
