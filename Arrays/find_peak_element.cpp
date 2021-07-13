class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int l = 0, r = nums.size();
        if(r == 1)
            return 0;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(mid + 1 < nums.size() and nums[mid] < nums[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
        
        
        
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        
        
        // The maximum element of the array will always be a peak, since there is a constraint nums[i] != nums[i + 1] for all valid i.

        return max_element(nums.begin(), nums.end()) - nums.begin();
    }
};
