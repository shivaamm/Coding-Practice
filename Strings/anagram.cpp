An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, “act” and “tac” are an anagram of each other.

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
    
        if(a.length()!=b.length())
            return false;
        else
        {
            int arr[26]={0};
            for(int i=0;i<a.length();i++)
            {
                arr[a[i]-'a']++;
            }
            for(int i=0;i<b.length();i++)
            {
                arr[b[i]-'a']--;
            }
            for(int i=0;i<26;i++)
            {
                if(arr[i]!=0)
                return(false);
            }
        }
        return true;
      
        
    }

};
