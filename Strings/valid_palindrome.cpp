class Solution {
public:
    bool isPalindrome(string str) {
       
        for (int i = 0, len = str.size(); i < len; i++)
        {
            // check whether parsing character is punctuation or not
            if (ispunct(str[i]))
            {
                str.erase(i--, 1);
                len = str.size();
            }
        }
        // to remove all spaces from a given string
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
            
        // using transform() function and ::tolower in STL
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string ss=str;
        // Reverse str[begin..end]
        reverse(str.begin(), str.end());
         
        // cout<<ss<<endl<<str;
        if(ss==str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


****************** faster program **********************
class Solution {
public:
    bool isPalindrome(string s) {
        string S="";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                S+=tolower(s[i]);
            } else if (s[i]>='a' && s[i]<='z'){
                S+=s[i];
            } else if (s[i]>='0' && s[i]<='9'){
                S+=s[i];
            }
        }
        for(int i=0; i<S.size()/2; i++){
            if(S[i]!=S[S.size()-1-i]) return false;
        }
        return true;
    }
};
