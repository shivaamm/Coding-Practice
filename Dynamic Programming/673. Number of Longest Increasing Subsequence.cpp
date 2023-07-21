class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) 
    {
        int n = nums.size(), maxLISLen = 1;
        
        vector<int>length(n, -1), count(n, -1); //DP
        //===================================================================================
        for (int start = n - 1; start >= 0; start--)
        {
            int LISLen = 1, LISCount = 1;
            //=======================================================
            for (int i = start + 1; i < nums.size(); i++)
            {
                if (nums[i] > nums[start])
                {
                    int currLen = 1 + length[i]; //1 + nextLen
                    if (currLen > LISLen)
                    {
                        LISLen = currLen;
                        LISCount = count[i]; //nextCount
                    }
                    else if (currLen == LISLen) 
                        LISCount = LISCount + count[i];
                }
            }
            //=============================================================
            length[start] = LISLen; 
            count[start] = LISCount;
            maxLISLen = max(maxLISLen, length[start]);
        }
        //========================================================================================
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (length[i] == maxLISLen) 
                ans += count[i];
        }
        return ans; 
    }
};
