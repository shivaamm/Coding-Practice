Approach: Consider every sub-array of size k starting from the beginning of the array and reverse it. We need to handle some special cases. 
If k is not multiple of n where n is the size of the array, for the last group we will have less than k elements left, we need to reverse all remaining elements. 
If k = 1, the array should remain unchanged. If k >= n, we reverse all elements present in the array.

Below image is a dry run of the above approach:
https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190620124700/Reverse-an-array-in-groups-of-given-size.png


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
       
        for (int i = 0; i < n; i += k)
        {
            int left = i;
      
            // to handle case when k is not multiple of n
            int right = min(i + k - 1, n - 1);
      
            // reverse the sub-array [left, right]
            while (left < right)
                swap(arr[left++], arr[right--]);
      
        }
    }
};
