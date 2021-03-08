class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str) return 1;
        return 2;
    }
};
