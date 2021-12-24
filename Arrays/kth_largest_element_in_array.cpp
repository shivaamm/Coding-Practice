class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
    1st way
        sort(nums.begin(),nums.end());
        int ans=nums.size()-k;
        return nums[ans];
        
        
    2nd way
         nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
        return nums[k - 1];
        
        
    3rd way
        partial_sort(nums.begin(), nums.begin() + k, nums.end(), greater<int>());
        return nums[k - 1];
        
    }
};
