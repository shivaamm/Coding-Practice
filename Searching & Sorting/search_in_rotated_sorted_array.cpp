class Solution {
public:
    int search(vector<int>& nums, int target) {
	    // // int f=0;
	    // for(int i=0;i<nums.size();i++)
	    // {
	    //     if(nums[i]==target)
	    //         return i;
	    // }
	    // return -1;
      
      
      *********************************************** O(lon n) **************************************** using binary search
        
        int s = 0;
        int e = nums.size()-1;
        int mid;
        
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >= nums[s]){
                if(nums[s] <= target and target <= nums[mid]){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
                if(nums[mid] <= target and target <= nums[e]){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
            
        }
        return -1;
    }
};
