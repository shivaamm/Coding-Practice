https://leetcode.com/problems/number-of-1-bits/
/*
Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while(n!=0){
            n=n&(n-1);
            cnt++;
        }
        return cnt;
       
    }
};

// 2nd (using build in fuction)
 // int x=__builtin_popcount(n);
        // return x;
