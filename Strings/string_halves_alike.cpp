This is a simple two pointer solution moving inwards to the center of the string while checking if each character is a vowel with one pointer starting from the left and one pointer starting from the right. 
 We are using the variables left and right to store the total number of vowels met on each side of the string and then returning if they are both equal at the end.

class Solution {
public:
    bool halvesAreAlike(string s) {
        int l = 0, r = 0;
        
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; ++i, --j) {
            l += isVowel(tolower(s[i]));
            r += isVowel(tolower(s[j]));
        }
        
        return l == r;
    }
    
    bool isVowel(char s) {
        return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
    }
};

**********************************************************************************************************************************

bool halvesAreAlike(string s) {
	int vowelDiff = 0, mid = size(s) / 2;
	for(int i = 0; i < mid; i++) vowelDiff += isVowel(s[i]) - isVowel(s[mid + i]); // vowels difference b/w 1st & 2nd half
	return !vowelDiff;
}
bool isVowel(char &c){        
	return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';        
}

***********************************************************************************************************************************

This problem is pretty straightforward. The first issue is being able to identify vowels. There are obviously many ways to do this, but this seems like a good place to use some kind of vowel lookup data structure (vowels).
  Depending on the language, it can be a string, a dictionary, a map, a set, etc.

Then we just need to keep a balance counter (ans) and iterate through both halves of the input string (S) and increment ans whenever the first half has a vowel and decrement ans whenever the second half has a vowel.

Once we're done, we can just return ans == 0 to determine if the two string halves are balanced.

  
string vowels = "aeiouAEIOU";

class Solution {
public:
    bool halvesAreAlike(string S) {
        int mid = S.size() / 2, ans = 0;
        for (int i = 0, j = mid; i < mid; i++, j++) {
            if (~vowels.find(S[i])) ans++;
            if (~vowels.find(S[j])) ans--;
        }
        return ans == 0;
    }
};
