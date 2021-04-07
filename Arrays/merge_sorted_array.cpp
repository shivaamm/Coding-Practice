class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=m; i<nums1.size(); i++)
           nums1[i]=nums2[i-m];
        sort(nums1.begin(), nums1.end());
        
    }
};

// OR
//  for (auto i =0; i<n ; i++)
//             nums1[m+n-1-i]=nums2[i];
