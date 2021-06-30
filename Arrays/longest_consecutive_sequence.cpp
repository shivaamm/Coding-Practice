class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestSeqLen = 0, count=1;
        set<int> mmSet;
        if(nums.size()==0)
            return 0;
       
        for(auto n : nums)
            mmSet.insert(n);
    
        for(auto it = mmSet.begin(); it!= mmSet.end(); )
        {
            auto it1 = it++;
            if(it != mmSet.end())
            {
                if(*it - *it1 == 1)
                    count++;
                else
                {
                    longestSeqLen = max(longestSeqLen, count);
                    count=1;
                }
            } 
            it1 = it;
        }
        longestSeqLen = max(longestSeqLen, count);
        return longestSeqLen;
        
   //////////////**************************/////////////////****************///////////////////******/*///////////////////////**************************/////////////////****************///////////////////


//         int count = 1; 
// 		int max_count = 0;
// 		int i, j; // i - traverse array, j - traverse consecutive numbers

// 		unordered_set<int> uset(nums.begin(), nums.end());

// 		for(i = 0; i < nums.size(); i++){
// 			j = 1; count = 1;
			
// 			// Check if the previous consecutive number exists, if not find all consecutive number greater than nums[i]
// 			if(uset.find(nums[i] - 1) == uset.end()){
// 				while(uset.find(nums[i]+j) != uset.end()){
// 					j++; count++;
// 				}
// 			}
			
// 			max_count = max(count, max_count);
// 		}
// 		return max_count;
        
    }
};
