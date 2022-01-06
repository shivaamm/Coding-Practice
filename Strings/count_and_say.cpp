class Solution {
public:
    string countAndSay(int n) {
         string result = "1";  // for case n=1
        while(--n){
            string temp = "";
            for(int i=0;i<result.size();i++){
                int count = 1;   // it's important to init count as 1 not 0 (check 2nd test case)
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
