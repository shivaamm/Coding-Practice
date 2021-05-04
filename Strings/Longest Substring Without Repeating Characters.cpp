To Solve this particular problem, we can use Set as in the question it is metioned we have to find the substring that contains unique characters in it.
Initially, we will take two pointers i and j and a len variable to find the maxium length of the substring. Here is the logic of the solution,

Initially i and j are at 0 position in the string.
Create a set to store the unique characters.
In a loop check if the ith character is present in the set or not.
If the ith character is not present in the set then insert that particular character in the set and increment i
If the ith character is already present in the set then remove the jth character from the set and increment j pointer.
Lastly find and return the maximum length of the substring.


class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if(str.size()==0) return 0;
     int i=0,j=0,mx=0;
        set<char>s;
        while(i<str.length()){
            char c= str[i];
            while(s.count(c)){
                s.erase(str[j]);
            ++j;
            }
            s.insert(c);
            mx= max(mx, i-j+1);
            ++i;
        }
        return mx;
    }
};

*******************************************************************************************************


int lengthOfLongestSubstring(string s) {
        int n = s.size(), ans = 0;
        unordered_set<char> cnt;
        int j=0;
        for(int i=0; i<n;  i++){
            while(j<n && !cnt.count(s[j])){
                cnt.insert(s[j]);
                j++;
            }
            ans = max(j-i, ans);
            cnt.erase(s[i]);
        }
        return ans;
    }
    
 
 ******************************************************************************************************
 
 
 int lengthOfLongestSubstring(string s)
{
    int res = 0;
    vector<int> lastIndex(256, -1); //j is the ending point of window
    int i = 0;                 // i is the starting point of window
    for(int j = 0; j < s.length(); j++)
     {
         i = max(i, lastIndex[s[j]] + 1);
         res = max(res, j - i + 1);
         lastIndex[s[j]] = j;
     }
     
    return res; 
}


