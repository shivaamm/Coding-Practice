Approach: This concept is related to partition of quick sort . In quick sort’ partition, after one scan, the left of the array is smallest and 
          right of the array is the largest of selected pivot element.
          
Algorithm: 
 
Create a variable index index = 0
Traverse the array from start to end
If the element is 0 then swap the current element with the element at index position and increment the index by 1.
If the element is 1 keep the element as it is.


class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        vector<int>v;
        int j = -1;
        for (int i = 0; i < binArray.size(); i++) {
     
            // if number is smaller than 1
            // then swap it with j-th number
            if (binArray[i] < 1) {
                j++;
                swap(binArray[i], binArray[j]);
            }
        }
        for (int i = 0; i < binArray.size(); ++i)
        {
            v.push_back(binArray[i]);
        }
        return v;
    }
};

Time Complexity: O(n). 
Only one traversal of the array is needed, So time Complexity is O(n).
 
Space Complexity:O(1). 
The space required is constant.
  
