class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> v1(nums1.begin(), nums1.end());
        unordered_set<int> v2(nums2.begin(), nums2.end());

        vector<int> distinct_nums1, distinct_nums2;
        for (int num : v1) {
            if (v2.count(num) == 0) {
                distinct_nums1.push_back(num);
            }
        }

        for (int num : v2) {
            if (v1.count(num) == 0) {
                distinct_nums2.push_back(num);
            }
        }

        return {distinct_nums1, distinct_nums2};
    }
};
