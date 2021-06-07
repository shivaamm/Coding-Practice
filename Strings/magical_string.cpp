class Solution{   
public:
    string magicalString(string S){
        string z="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<S.length();i++)
        {
            int x=S[i];
            x-=97;
            S[i]=z[25-x];
        }
        return S;
    }
};
