class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    
    ***************************************  using insert ************************************************
    
        vector<int>res;
        for(int i=0; i<index.size(); i++){
         auto  it = res.insert(res.begin()+index[i], nums[i]);
        }
        return res;
        
    ********************************************************************************************************
    
    vector<int> target;
        
        for(int i = 0; i <nums.size(); i++)
        {
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;
        
    ************************************* without using insert *********************************************
    
    for(int i=0;i<index.size();i++){
            for(int j=i-1;j>-1;j--){
                if(index[i]<=index[j]){
                    index[j]++;
                }
            }
        }
        vector<int> res(index.size());
        for(int i=0;i<index.size();i++){
            res[index[i]] = nums[i];
        }
        return res;
    
    }
};
