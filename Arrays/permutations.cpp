// explanation - https://leetcode.com/problems/permutations/discuss/1257633/Backtracking-Solution-oror-C%2B%2B-oror-Easy-To-Understand-oror-With-explanation

class Solution {
public:
     vector<vector<int>> result;
    
    // Backtracking
    void permutation(vector<int> &nums,int i,int n){
        if(i==n){
            result.push_back(nums);
            return ;
        }

        for(int j=i;j<=n;j++){
            swap( nums[i],nums[j]);
            permutation(nums,i+1,n);
            swap( nums[i],nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        permutation(nums,0,nums.size()-1);
        
        return result;
    }
    
    
    ***************************************************************************************************************************************
    
     vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> store;
        
        helper(nums, 0, store);
        
        return store;
    }
    
    void helper(vector<int> current, int pos, vector<vector<int>> &store)
    {
        if(pos == current.size())
        {
            store.push_back(current);       //Push the number when the permute is formed
            return;
        }
        else
            for(int idx = pos; idx < current.size(); idx++)
            {
                swap(current[pos], current[idx]);       //Swap each index recursively
                helper(current, pos + 1, store);        //Perform for next each Permutation
            }
    }
    
    
};
