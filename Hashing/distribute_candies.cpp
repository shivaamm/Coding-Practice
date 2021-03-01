https://leetcode.com/problems/distribute-candies/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // return min(candyType.size() / 2, set<int>(candyType.begin(), candyType.end()).size());
        
        map<int, int> m;
        for( int i=0; i<candyType.size(); ++i )
            m[candyType[i]]++;
        
        int num = candyType.size()/2;
        if( num > m.size() )
            return m.size();
        return num;
    }
};
