https://leetcode.com/problems/set-mismatch/submissions/

Another Solutions uses bitwise approach

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size=nums.size();
        vector<int> check(size,false);
        int val1=0;
        int val2;
        for(int i=0;i<size;i++){
            // cout<<nums[i]-1<<" ";
            if(check[nums[i]-1]==true){
                val1=nums[i];
            }
            check[nums[i]-1]=true;
        }
        for(int i=0;i<size;i++){
            if(check[i]==false){
                val2=i+1;
            }
        }
        return {val1,val2};
    }
};
