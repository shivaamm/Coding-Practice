https://leetcode.com/problems/longest-harmonious-subsequence/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> map;
        for(auto a : nums) {
            map[a]++;
        }
        
        for(auto b : map) {
            // search if any element is having differnce of 1
            auto found = map.find(b.first+1);
            // If such combination exist
            if(found != map.end()) {
                ans = max(ans, b.second+found->second); // then find the sum of current frequency and consecutive element frequency
            }
        }
        return ans;
    }
};

// Explanation :

//     Store the frequencies of all elements of array in hashmap
//     Now iterate over map and find consecutive element.
//     If found then store sum of current element's frequency and consecutive value's frequency.
//     Finally compare the size of of subsequences formed and return Longest Harmonious Subsequence.


ANOTHER APPROACH

class Solution {
public:
	int findLHS(vector<int>& nums) {
		unordered_map<int, int> tmp;
		int maxSub = 0;
		for (auto num: nums)
		{
			++tmp[num];
		}
		
		for (auto & [ num, value ]: tmp)
		{
			if ( tmp.end() != tmp.find(num - 1) )
				if( maxSub < tmp[num - 1] + value )
					maxSub = tmp[num - 1] + value;
		}
		return maxSub;
	}
};
