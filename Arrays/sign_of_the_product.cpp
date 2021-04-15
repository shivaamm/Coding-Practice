## https://www.geeksforgeeks.org/array-product-c-using-stl/

class Solution {
public:
    int arraySign(vector<int>& v) {
        
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                return 0;
            if(v[i]<0)
                 c++;
        }
        if(c%2==0)
            return 1;
        else
            return -1;
        
         // long long ans = accumulate(v.begin(), v.end(), 1, multiplies<int>());
     
//         int multi = 1;

//         for (auto& e: v)
//             multi *= e;
        
        // if(ans>0)
        //     return 1;
        // else if(ans<0)
        //         return -1;
        // else
        //     return 0;
    }
};
