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
            
            
         ********************************************************************************************
            
            0 0000 = 0
1 0001 = 1
2 0010 = 1
3 0011 = 2
4 0100 = 1
5 0101 = 2
6 0110 = 2
7 0111 = 3

Here we can observe that if the number is even then the number of ones is same as that when we right shift that number.
eg n=6 => 0110
right shift n, we get 0011 => 3 (number of 1 bits = 2)
since division by 2 is same as right shift we divide the number by two to get the answer

When number is odd, then while performing rigth shift the rightmost bit (which is one) is lost, therefore we add one to the answer.
eg n=7 => 0111
right shift n, we get 0011 =>3 (number of 1 bits = 2)
number of one bits = 2+1 = 3
            
            
            
             vector<int> ans;
        ans.push_back(0);
        int temp;
       
        for(int i=1;i<=num;i++){
            if(i%2==0)
            {
                temp = ans[i/2];
            }
            else{
                temp = ans[i/2]+1;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
