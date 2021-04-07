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
