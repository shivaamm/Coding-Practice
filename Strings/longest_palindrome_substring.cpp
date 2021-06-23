class Solution {
public:
    string longestPalindrome(string A) {
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
