class Solution{   
public:
    string smallestNumber(int s, int d){
        if (s > 9 * d)
        return "-1";
        string ans(d, '1');
        --s;
        for (int i = d - 1; i >= 1; --i) {
            int dig = min(9, s);
            ans[i] = dig + '0';
            s -= dig;
        }
        if (s > 0)
        ans[0] += s;
        
       return ans; 
    }
};
