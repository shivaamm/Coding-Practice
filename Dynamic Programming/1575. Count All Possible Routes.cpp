class Solution {
public:
    const int MOD = 1000000007;

    int helper(const vector<int>& locations, int city, int finish, int remainFuel, vector<vector<int>>& memo) {
        if (remainFuel < 0) {
            return 0;
        }
        
        if (memo[city][remainFuel] != -1) {
            return memo[city][remainFuel];
        }
        
        int total = city == finish ? 1 : 0;
        
        for (int nextCity = 0; nextCity < locations.size(); nextCity++) {
            if (nextCity != city && remainFuel >= abs(locations[nextCity] - locations[city])) {
                total = (total + helper(locations, nextCity, finish, remainFuel - abs(locations[nextCity] - locations[city]), memo)) % MOD;
            }
        }
        
        return memo[city][remainFuel] = total;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        vector<vector<int>> memo(n, vector<int>(fuel + 1, -1));
        return helper(locations, start, finish, fuel, memo);
    }
};
