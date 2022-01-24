class Solution {
public:
    bool detectCapitalUse(string word) {
        
        
//         int sum=0,n=word.length();   //sum --> count of 'a' to 'z'
//         for(int i=1;i<n;++i) if(word[i]>=97) ++sum;
//         return sum==n-1 || (sum==0 && word[0]<=90);
        
        
        
        
        
        int count=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                count++;
            }
        }
        return (count==0) || (count==word.size()) || (count==1 && word[0]>='A' && word[0]<='Z');
    }
};


// Intution

// (count==word.size() ) ===> All letters in this word are capitals, like "USA".
// (count==0 ) ===> All letters in this word are not capitals, like "leetcode".
// (count==1 && word[0] is Capital Letter ) ===> Only the first letter in this word is capital, like "Google"
