class Solution{
public:
    int mthHalf(int N, int M){
        int res=N;
        for(int i=0;i<M-1;i++)
        {
            res=res/2;
        }
        return res;
    }
};
