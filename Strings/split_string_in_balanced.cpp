https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,ans=0;
		for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') 
                ++l;
            else ++r;
            if(l==r) 
            {
                ans++;
                l=0;
                r=0;
            }
        }
        return ans;
        
        // int split = 0, count = 0;
        // for(auto c : s) {
        //     split += (c == 'R') ? 1 : -1;
        //     if(split == 0) count++;
        // }
        // return count;
    }
};
