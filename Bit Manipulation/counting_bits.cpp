class Solution {
public:
    vector<int> countBits(int num) {
    
    *********************************************  DYNAMIC PROGRAMMING   ************************
        
        if(num == 0)
        return {0};
        vector<int> res(num + 1, 0);

        res[0] = 0;
        res[1] = 1;

        for(int i = 2; i <= num; i++)
            res[i] = res[i / 2] + i % 2;

        return res;
        
        ***************************************************************************************
        
//         vector<int> res(num + 1);
        
//         for(int i = 1; i < num + 1; i++) {
//             if(i % 2 == 0) {
//                 res[i] = res[i >> 1];                
//             }else{
//                 res[i] = res[i >> 1] + 1;
//             }
//         }
        
//         return res;
    }
};
