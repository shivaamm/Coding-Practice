class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        for(int i=0;i<n;i++)
        {
            if(b==a[i])
                b=2*b;
        }
        return b;
    }  
};

