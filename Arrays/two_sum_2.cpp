https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int i=0,j=numbers.size()-1;
        while(i<numbers.size())
        {
            int sum=numbers[i]+numbers[j];
            if(sum>target)
            { 
                j--;
            }
            else if(sum<target)
            {
                i++;
            }
            else
            {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
        }
        return result;
    }
};

/*
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
*/
