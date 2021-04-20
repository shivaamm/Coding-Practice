class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> m;
        
        for (auto trip : trips) {
            m[trip[1]] += trip[0];
            m[trip[2]] -= trip[0];
        }
        
        int currentCapacity = 0;
        for (auto it : m) {
            currentCapacity += it.second;
            if (currentCapacity > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
