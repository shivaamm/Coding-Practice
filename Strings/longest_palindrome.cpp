class Solution {
public:
    int longestPalindrome(string s) {
         int res = 0;
        unordered_map<char, int> map;
        for (int i=0; i<s.size(); i++) // save in map the amount of each letter in s
        {
            map[s[i]]++;
        }
        bool flag = false;
        for (auto x : map)
        {
            res += x.second - (x.second % 2); // add 2 to res for each pair of the same letter
            if (x.second % 2) // allow one letter to be only once - for odd length palindrome
                flag = true;
        }
        if (flag)
            res++;
        return res;
    }
};
