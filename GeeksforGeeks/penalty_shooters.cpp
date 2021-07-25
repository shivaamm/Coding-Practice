class Solution{
public:
    vector<int> goals(int X, int Y, int Z){
        int c1 = 0, c2 = 0;
        while(Z > 1){
            if(X%Z == 0){
                c1++;
                X--;
            }
            if(Y%Z == 0){
                c2++;
                Y--;
            }
            else
                Z--;
        }
        vector<int> val;
        val.push_back(c1);
        val.push_back(c2);
        return val;
    }
};
