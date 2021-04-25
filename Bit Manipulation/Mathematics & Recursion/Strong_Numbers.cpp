class Solution {
  public:
  
      int factorial(int r) {
       int fact = 1;
       while(r>1) {
          fact = fact * r;
          r--;
       }
       return fact;
    }
    int isStrong(int n) {
       int temp, rem, result = 0;
       temp = n;
       while(temp) {
          rem = temp % 10;
          result = result + factorial(rem);
          temp = temp/10;
       }
       if (result == n)
          return 1;
       else
          return 0;
    }
};
