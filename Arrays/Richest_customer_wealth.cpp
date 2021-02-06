https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // int max=0,sum=0;
        // for(int j=0;j<accounts.size();j++)
        // {
        //     for(int i=0;i<accounts[0].size();i++)
        //     {
        //         sum+=accounts[j][i];
        //     }
        //     if(sum>max)
        //     {
        //         max=sum;
        //     }
        //     sum=0;
        // }
        // return max;
        int richest = 0;
        for (auto &customer : accounts)
            richest = max (richest, accumulate(customer.begin(), customer.end(), 0));
        
        return richest;
    }
};


//  accumulate()

// This function returns the sum of all the values lying in a range between [first, last) with the variable sum.

//     Syntax 1:

//     accumulate(first, last, sum);
//     first, last : first and last elements of range 
//                   whose elements are to be added
//     sum :  initial value of the sum

