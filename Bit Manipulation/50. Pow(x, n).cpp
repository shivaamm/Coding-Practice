class Solution {
public:
    double bin(double x,long long k){
        if(k==1)return x;
        double a = bin(x,k/2);
        if(k&1)return a*a*x;
        else return a*a;
    }
    double myPow(double x, int n) {
        if(n==0)return 1;
       long long k = long(abs(n));
       double ans = bin(x,k);
       if(n<0)return 1/ans;
       else return ans;
    }
};
