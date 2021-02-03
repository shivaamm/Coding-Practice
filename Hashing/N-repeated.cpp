https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
      
      //**********using map************//
        // int n=A.size();
        // map<int,int> mp;
        // for(int x: A)
        // {
        //     mp[x]++;
        //     if(mp[x]>1)
        //     {
        //         return x;
        //     }
        // }
        // return 0;
        
        //********using set***********//
        unordered_set <int> seenBefore;
		for(auto &val:A){
			if(seenBefore.find(val) == seenBefore.end()){
				seenBefore.insert(val);
			}
			else{
				return val;
			}
		}
		return 0;
    }
};
