https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int sum = 0;
            
        for(int i = 0; i < jewels.size(); i++)
                sum += count(stones.begin(),stones.end(),jewels[i]);

        return sum;
     
        //*********** USING SET *************//
        // int count = 0;
        // unordered_set<char> setJewels(jewels.begin(), jewels.end());
        // for(char ch : stones){
        //     if(setJewels.find(ch) != setJewels.end()) count++;  
        // }
        // return count;
    }
};
