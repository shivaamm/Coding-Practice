class Solution
{
public:
    int setKthBit(int n, int k)
    {
      //     int p;
      //     p=pow(2,k);
       // n= n|p;
       // return n;
      
      *****************************************
	   
	   return n |(1<<k) ;
      
      
    }
    
};
