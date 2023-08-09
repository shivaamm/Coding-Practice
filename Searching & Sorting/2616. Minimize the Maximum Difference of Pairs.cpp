class Solution {
public:
   //able to k pairs with maximum difference of mid or not
    bool solve(vector<int>& nums,int d,int p){
        int n=nums.size();
        int c=0;
         for (int i = 0; i  < n-1; i++){

            if (nums[i + 1] - nums[i] <= d) {
               c++;
               i++;//no index appears more than once amongst the p pairs
            }
            if(c>=p)//able to find
            return true;
           }
           return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
    sort(nums.begin(), nums.end());
    int n=nums.size();
    //maximum difference is maximum element - minimum element
    int lo = 0, hi = nums[n-1] - nums[0];
    //we are checking for all the difference by binary search instead of linear search
    while (lo < hi) {
        int mid = (lo + hi) / 2;
      
        if (solve(nums,mid,p))
            hi = mid;
        else
            lo = mid + 1;
    }
    return lo;
}
};
