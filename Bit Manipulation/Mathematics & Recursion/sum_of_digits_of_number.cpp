class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
         if(n<=0)return 0;
            return sumOfDigits(n/10)+n%10;
    }
};
