class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=nums[0],count=1;
        int a=nums.size();
        for(int i=1 ; i<a ; i++)
        {
            if(nums[i]==candidate)
                count++;
            else
                count--;
            if(count==0)
            {
                candidate = nums[i];
                count = 1;
            }
            if (count >= a) 
                return candidate;
        }
        return candidate;
    }
};
