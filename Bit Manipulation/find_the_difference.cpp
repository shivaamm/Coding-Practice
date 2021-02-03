https://leetcode.com/problems/find-the-difference/

More solutions approach - https://leetcode.com/problems/find-the-difference/discuss/861876/C%2B%2B-3-Approaches-or-Xor-operation-or-Hashmap-approach-or-sorting-approach

class Solution {
public:
    char findTheDifference(string s, string t) {
//         sort(s.begin(),s.end());
    
// 		sort(t.begin(),t.end());
    
    
// 		for(int i=0;i<s.length();i++)
// 		{
// 			if(s[i]!=t[i])
// 			{
// 				return t[i];
// 			}
// 		}
    
// 		return t[t.length()-1];
        
    //******using xor***********//
    
    char x = 0;
    
    for(auto ch : s)
    {
        x^=ch;
    }
    
    for(auto ch: t)
    {
        x^=ch;
    }
    
    return x;
    }
};
