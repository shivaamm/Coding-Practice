class Solution{
public:
    string findLargest(int N, int S){
        string s;
        if(S == 0 && (N > 1 || N < 1))
            return "-1";
        else if(S == 0 && N == 1)
            return "0";
        if(S > N*9)
            return "-1";
        for(int i = 0; i < N; i++)
        {
            if(S < 9)
            {
                s+= to_string(S);
                S = 0;
            }
            else
            {
                s+= '9';
                S-=9;
            }
        }
        return s;
    }
};
