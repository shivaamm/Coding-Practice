Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".
  
Example 2:

Input: 
S = "abc"
Output: a
Explanation: "a", "b" and "c" are the 
longest palindromes with same length.
The result is the one with the least
starting index.



class Solution {
  public:
    string longestPalin (string A) {
       int n = A.length() , len = A.length();
       while(len > 0){
           int j = 0;
           while(j+len <= n){
               int start = j,end = j+len-1;
               while(start < end){
                if(A[start] != A[end]) break;
                start++; end--;
               }
               if(start >= end){
                   return A.substr(j  , len);
               }
               j++;
           }
           len--;
       }
       string res = "";
       return res;
    }
};
