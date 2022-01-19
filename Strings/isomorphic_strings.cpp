class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        // ALL CORRECT /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        
        
//         unordered_map<char, char> ht1, ht2;
//         int n=s.size();
        
//         for(int i=0; i<n; i++){
//             if(ht1.find(s[i]) == ht1.end()){
//                 if(ht2.find(t[i]) != ht2.end()){
//                     return false;
//                 }
//                 ht1[s[i]] = t[i];
//                 ht2[t[i]] = s[i];
//             }
//             else if(ht1[s[i]] != t[i]){
//                 return false;
//             }
//         }
//         return true;
        
        
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        
         if(s.size() != t.size())
            return false;
        unordered_map<char, char> m1;
        unordered_map<char, char> m2;
        for(int i = 0; i < s.size(); i++){
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(m1[s[i]] != t[i] || m2[t[i]] != s[i])
                return false;
        }
            
        return true;
        
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        
//          int arr1[256] = {};
//         int arr2[256] = {};
//         int len = s.length();
//         for(int i =0;i<len;i++) {
//            char c1 = s[i];
//            char c2 = t[i];
//             if(arr1[c1]!=arr2[c2]) {
//               return false;
//            }
//             arr1[c1] = i+1;
//             arr2[c2] = i+1;
//         }
        
//         return true;
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
