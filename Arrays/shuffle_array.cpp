https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = 2*n;
        vector<int> v(size);
        int index1 = 0;
        int index2= 1;
        for(int i = 0,j = n; i<n;i++,j++){
            v[index1] = nums[i];
            v[index2] = nums[j];
            index1 += 2;
            index2 += 2;
        }
     return v;
    }
};

// 2nd approach
// this will put all y values satrting from y index
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(nums[i]);
        //     v.push_back(nums[n+i]);
        // }
        // return v;
