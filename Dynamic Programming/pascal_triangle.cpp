more - https://leetcode.com/problems/pascals-triangle/discuss/1287175/Short-and-Simple-Solution-w-Explanation-or-Beats-100

class Solution {
public:
    vector<vector<int>> generate(int n) {
         vector<vector<int>> ans(n);             // initialize n rows
        for(int i = 0; i < n; i++) {
            ans[i] = vector<int>(i+1,1);        // ith row(0-indexed) has i+1 elements
            for(int j = 1; j < i; j++)          // 1st and last elements will be 1, rest will be sum of two elements from above row
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];            
        }
        return ans;
    }
};


