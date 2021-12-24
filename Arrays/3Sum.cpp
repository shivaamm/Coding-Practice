class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int target=-a;   // a+b+c=0;  b+c=-a
            int start=i+1;
            int end=n-1;
            
            while(start<end)
            {
                if(nums[start] + nums[end] == target)
                {
                    ans.push_back({nums[i],nums[start],nums[end]});
                    
                    while(start<end && nums[start]==nums[start+1])
                        start++;
                    while(start<end && nums[end]==nums[end-1])
                        end--;
                    start++;
                    end--;
                }
                else if(nums[start] + nums[end] >target)
                {
                    end--;
                }
                else
                    start++;
            }
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return ans;
    }
};
