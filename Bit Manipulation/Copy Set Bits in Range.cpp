class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        for(int i = l-1;i<r;i++)
            x = x | (1<<i) & y;
        
        return x;
    }
};
