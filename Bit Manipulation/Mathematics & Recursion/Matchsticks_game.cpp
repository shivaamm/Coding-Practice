class Solution {
  public:
    int matchGame(long long n) {
       if(n%5==0)
	        return -1;
	    else
	        return n%5;
    }
};
