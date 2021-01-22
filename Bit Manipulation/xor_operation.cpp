https://leetcode.com/problems/xor-operation-in-an-array/

/*
Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        
        for(int i=1; i<n; i++){
            ans=ans^(start+(i<<1));
        }
        return ans;
         
    }
};


// 2nd approach
// int i,previous;
//         previous=start;
//        int xo = previous;
//         for(i=1;i<n;i++)
//         {
//             xo =xo ^(previous + 2);  
//             previous=previous +2;
//         }
//         return xo;

