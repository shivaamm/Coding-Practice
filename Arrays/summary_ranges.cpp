class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
//         vector<string>v;
//         int start=nums[0];
//         string s1 = to_string(start);
//         v.push_back(s1);
        
//         // int count=0;
//         string s2;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=nums[i+1]+1)
//             {
//                 // start=nums[i];
//                 s1=to_string(start);
//                 s2=to_string(nums[i]);
//                 string ss= s1+"->"+s2;
//                 v.push_back(ss);
//                 start=nums[i];
//             }
// //             else{
                
// //             }
//         }
//         return v;
        
        vector<string> range; 
        int n =  nums.size();
        for(int i = 0; i < n; i++) {
            int start =  nums[i];  // starting value
            
           // check until consecutive elements are there 
            while(i+1 < n && nums[i+1] == nums[i]+1) {  
                i++;
            }
            
            
            // if end found then put start->end int the vector
                string s, e;
                if(start != nums[i]) {
                     s = to_string(start);
                     e = to_string(nums[i]);
                    
                     s = s + "->" + e; // start->end
                    range.push_back(s); 
                    
                }
                else {
                    string str = to_string(start);
                    range.push_back(str); // if only one element is there
                }
            
        }
        return range;
    }
};
