class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()==0) return nums1;
        if(nums2.size()==0) return nums2;
        
		// ex)
		// nums1 =  [1,2,2,1] , nums2 = [2,2]
		
        sort(nums1.begin(),nums1.end()); // nums1 : [1,1,2,2]
        sort(nums2.begin(),nums2.end()); // nums2 : [2,2]
        
        vector<int> answer;
		
		set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(answer)); // answer : [2,2]
		answer.erase(unique(answer.begin(),answer.end()), answer.end()); // answer : [2]
        
        return answer;
        
        
        ****************************************************************************************************************************
        
        
      //   vector<bool>vis(1000);//to keep record of the visited number to avoid duplicates
      // unordered_map<int,int>mymap;//to count the number so that we can match it with other set of vector given
      // vector<int>ans;
      // for(int i=0;i<nums1.size();i++)
      //   mymap[nums1[i]]++;
      // for(int i=0;i<nums2.size();i++)
      // {
      //   if(mymap.find(nums2[i])!=mymap.end()&&!vis[nums2[i]])// if we found nums2 element in map that means it is present in nums1. then we have to check if it is visited then we have to skip it to avoid duplicates otherwise add to the vector ans turn visited to be true.
      //     ans.push_back(nums2[i]),vis[nums2[i]]=true;
      // }return ans;
    
        
        ****************************************************************************************************************************
        
        
		// unordered_map<int,int> ht;
		// vector<int> res;
		// for(int i=0;i<nums1.size();i++){
		// 	// put the value to be 1 to indicate this key is in nums1
		// ht[nums1[i]]=1;
		// }
		// for(int j=0;j<nums2.size();j++){
		// //if this number in the hash table with value = 1 , this mean it in nums1 so we sign it with value = 2
		// if(ht[nums2[j]] == 1){
		// ht[nums2[j]] = 2;
		// }
		// }
		// for (auto num : ht){
		// if(num.second == 2){
		// res.push_back(num.first);
		// }
		// }
		// return res;
    
    }
};
