class Solution {
public:
    bool isIsomorphic(string s, string t) {
         int arr1[256] = {};
        int arr2[256] = {};
        int len = s.length();
        for(int i =0;i<len;i++) {
           char c1 = s[i];
           char c2 = t[i];
            if(arr1[c1]!=arr2[c2]) {
              return false;
           }
            arr1[c1] = i+1;
            arr2[c2] = i+1;
        }
        
        return true;
    }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Solution {
public:
   string normalize_pattern(string word) {
        unordered_map<char, char> m;
        char curr = 'a';
        
        for (auto letter : word)
            if (!m[letter]) m[letter] = curr++;
        
        for (int i = 0; i < word.size(); i++) word[i] = m[word[i]];
        
        return word;
        
    }
    
    bool isIsomorphic(string s, string t) {
        return normalize_pattern(s) == normalize_pattern(t);
    }
};
