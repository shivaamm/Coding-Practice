https://leetcode.com/problems/count-good-triplets/submissions/

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    if(i<j<k<arr.size())
                    {
                        if((abs(arr[i]-arr[j])<=a) && (abs(arr[j] - arr[k])<=b) && (abs(arr[i] - arr[k])<=c))                                                       count++;
                    }
                }
            }
        }
        if(a==0 && b==0)
            return 0;
        else
            return count;
    }
};
