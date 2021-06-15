
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        int sum;
        sort(A, A + N);
        sort(B, B + M);
        vector<pair<int,int>> v;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                sum=A[i]+B[j];
                if(sum==X)
                {
                    v.push_back({A[i],B[j]});
                }
            }
        }
        return v;
    }
};
