class Solution {
public:
    int arraySign(vector<int>& nums) {
         int a = 1;
        for(auto i : nums){
            if(i==0) return 0;
            else if(i>0) a *=1;
            else a *= -1;
        }
        return a;
    }
};
