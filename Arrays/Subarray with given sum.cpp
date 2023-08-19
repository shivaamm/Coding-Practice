class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int sp=0;
        long long t=0;
        for(int i=0;i<n;i++)
        {
            t=t+arr[i];
            while(t>s)
            {
                t=t-arr[sp++];
            }
            if(t==s&&sp<=i)
            {
                return {sp+1,i+1};
            }
        
        }
        return {-1};
    }
};
