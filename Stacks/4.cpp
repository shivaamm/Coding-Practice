Question - https://leetcode.com/problems/next-greater-element-i/submissions/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result(nums1.size());
        for(int i=0;i<nums1.size();i++)
        {
            int x=nums1[i];
            for(int j=0;j<nums2.size();j++)
            {
                if(x==nums2[j])
                {
                    if(j!=nums2.size()-1)
                    {
                        for(int k=j+1;k<nums2.size();k++)
                        {
                            if(nums2[k]>x)
                            {
                                result[i]=nums2[k];
                                break;
                            }
                            else
                            {
                                result[i]=-1;
                            }
                        }
                    }
                    else
                    {
                        result[i]=-1;   
                    }
                    break;
                }
            }
        }
        return result;
    }
};
