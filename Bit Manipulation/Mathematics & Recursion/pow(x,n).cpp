https://leetcode.com/problems/powx-n/submissions/

class Solution {
public:
    double myPow(double x, int n) {
         if(n==0 || x==1) 
            return 1;
        double val = myPow(x,n/2);  //using recursion
        if(n<0) 
            x = 1/x;
        if(n%2==0) 
            return val * val;
        else 
            return val*val*x;
    }
};
