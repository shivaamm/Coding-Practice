trips = [[2,1,5],[3,3,7]], capacity = 4
After iterating over the trips array the map will look like this:

{
	1: 2,
	3: 3,
	5: -2,
	7: -3
}
here 1,3,5,7 are the pickup and 2,3,-2,-3 are drop points for passengers that we are storing using maps.

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
            currentCapacity += it.second;   // here we check each time if for any iteration the total is greater than capacity then it will break the loop and return true.
            if (currentCapacity > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
