class Solution {
public:
    vector<int> grayCode(int n) {
//         Gray code for a number n is n^(n/2), and we push the same for every number in range [0, pow(2,x)).


        //  vector<int> v;
        // long long int p=pow(2,n);
        // for(int i=0; i<p; i++){
        //     v.push_back(i^(i/2));
        // }
        // return v;
        
        
        
        
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        
        
        vector<int> res = {0};
        int size;
        
        for (int i = 0; i < n; i++) {
            size = res.size();
            for (int j = size - 1; j >= 0; j--) {
                res.push_back(res[j] | 1 << i);
            }
        }
        return res;
    }
};
