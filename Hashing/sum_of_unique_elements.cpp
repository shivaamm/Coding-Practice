https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> total;
        int result=0,n=nums.size();
        for(int i=0;i<n;i++) total[nums[i]]++;

        for(unordered_map<int,int>::iterator it=total.begin();it!=total.end();it++)
            if(it->second==1)
                result+=it->first;

        return result;
    }
};
