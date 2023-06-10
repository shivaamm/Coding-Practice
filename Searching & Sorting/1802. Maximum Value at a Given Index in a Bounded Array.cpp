class Solution {
public:
    long calc(long n) //sum of numbers from [1 to n]
    {
        return ((n * (n + 1)) / 2);
    }
    //=========================================================================================
    long getSum(int totalLen, int val)
    {
        long totalSum = 0;
        int decreasingLen = val; //count of decreasing elements [val, val - 1, .., 1]
        
        //[val, val - 1, val - 2, ... 1, 1, 1, 1]
        if (totalLen >= decreasingLen)
        {
            long currSum = calc(val);
            int remainingSum = totalLen - decreasingLen; //all 1's
            totalSum = currSum + remainingSum;
        }
        else //[val, val - 1, val - 2]
        {
            long lastVal = decreasingLen - totalLen;
            totalSum = calc(val) - calc(lastVal);
        }
        return totalSum; 
    }
    //===========================================================================================
    int maxValue(int n, int index, int maxSum) 
    {
        int low = 1, high = maxSum;
        int leftCount = index, rightCount = n - index - 1;
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            //=====================================================
            long  leftSum = getSum(leftCount, mid - 1);
            long  rightSum = getSum(rightCount, mid - 1);
            long  totalSum = leftSum + mid + rightSum;
            //=======================================================
            if (totalSum > maxSum)
                high = mid - 1;
            else { ans = mid; low = mid + 1; }
        }
        return ans; 
    }
};
