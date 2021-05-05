class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>mp,m;
//         for(auto i:arr){
//             mp[i]++;                               // stores the freq of array in map1
//          }
    
//         for(auto i:mp){
//             m[i.second]++;                // stores all freq in map2
//         }
//         for(auto i:m){
//             if(i.second>1){                   // check if any freq has more than 1 freq
//                 return false;
//             }
//         }
//         return true;


*********************************************************************************

          unordered_map<int,int>mp;                                // here we are using one map and set
        set<int>ans;
      for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;                    // stores the freq of array
      } 
      
      for(auto i=mp.begin();i!=mp.end();i++){
        ans.insert(i->second);                          // stores all unique freq in set
      }
      return ans.size()==mp.size() ?true:false;      // check if the size of set is same as map then true else false
    }
};
