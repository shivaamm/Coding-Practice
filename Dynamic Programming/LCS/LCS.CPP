class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int m, int n, string s1, string s2)
    {
        if (m == 0 || n == 0) 
        return 0; 
        if (s1[m-1] == s2[n-1]) 
            return 1 + lcs(m-1, n-1, s1, s2); 
        else
            return max(lcs(m, n-1, s1, s2), lcs(m-1, n, s1, s2));
    }
};
