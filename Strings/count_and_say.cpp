class Solution {
public:
    string countAndSay(int n) {
         string result = "1";  // for case n=1
        while(--n){
            string temp = "";
            for(int i=0;i<result.size();i++){
                int count = 1;   // it's important to init count as 1 not 0 (check 2nd test case) or below table
                while(i < result.size()-1 && result[i] == result[i+1]){ // here i'm checking sequence and keeping an count of same chars
                    count++;
                    i++;
                }
                temp +=  to_string(count) + result[i] ;
            }
            result = temp;
        }
        return result;
    }
};



Ques - https://leetcode.com/problems/count-and-say/

The following are the terms from n=1 to n=10 of the count-and-say sequence:
 1.     1
 2.     11
 3.     21
 4.     1211
 5.     111221 
 6.     312211
 7.     13112221
 8.     1113213211
 9.     31131211131221
10.     13211311123113112211
