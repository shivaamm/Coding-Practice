class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>res;
        vector<int>x;
		// starting the loop for 2^n iteration because this many subsets are possible
        for(int i =0 ; i< pow(2,n) ; i++){
            
            for(int j =0 ; j <n ; j++){
                if((i &(1<<j)) != 0){ // the condition checking if the element come in respective i subset. if it comes then the output will be nonzero(1)
                    x.push_back(nums[j]);
                }
            }
            res.push_back(x);
            x.clear();
        }
        return res;
    }
};



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



class Solution {
public:
    void sub(vector<int>& n,vector<vector<int>>& res,vector<int>& v,int idx){
	// if we reach last idx we simply have to return from there
        if(idx==n.size()){
            return;
        }
		// include curr idx value
        v.push_back(n[idx]);
        res.push_back(v);
        sub(n,res,v,idx+1);
		// remove the curr idx val and call for next val 
        v.pop_back();
        sub(n,res,v,idx+1);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        res.push_back(v);
        sub(nums,res,v,0);
        return res;
    }
};
