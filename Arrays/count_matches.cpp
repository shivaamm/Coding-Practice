https://leetcode.com/problems/count-of-matches-in-tournament/

class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};


// int count = 0;
        
//         while (n > 1) {
//             if (n % 2 == 0) {
//                 count += n / 2;
//                 n /= 2;
//             }
//             else {
//                 count += ((n - 1) / 2);
//                 n = (n - 1) / 2 + 1;
//             }
//         }
//         return count;
