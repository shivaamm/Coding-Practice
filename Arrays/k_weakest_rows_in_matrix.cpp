https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        
        for (int i = 0; i < mat[0].size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (!mat[j][i] && find(res.begin(), res.end(), j) == res.end()) {
                    res.push_back(j);
                    k--;
                    if (!k) return res;
                }
            }
        }
        
        for (int i = 0; i < mat.size(); i++) {
            if (find(res.begin(), res.end(), i) == res.end()) {
                res.push_back(i);
                k--;
                if (!k) return res;
            }
        }
        
        return res;
    }
};
