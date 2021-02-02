https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        //**************using hashing******************//
        
        // std::unordered_map<int,int> counts;
        // for (auto num : nums)
        //     counts[num]++;
        // int good_pairs = 0;
        // for (auto& [key, value] : counts)
        //     good_pairs += value * (value - 1) / 2;
        // return good_pairs;
        
        //*************using map********************//
        
        unordered_map<int,int> frequency;
        int good_pair=0;
        for(auto num : nums){
            if(frequency.find(num) != frequency.end()){ // if we have already seen this element such that i<j
                good_pair+=frequency[num]; // add the number of time u have seen it 
            }
            frequency[num]++;
        }
        return good_pair;
    }
};
