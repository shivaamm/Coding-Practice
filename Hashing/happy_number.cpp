class Solution {
public:

///////////////////////////////////////////////////////  used slow and fast two pointers (floyds cycle detection algo) //////////////////////////////////////////////

//     int next(int n)
//     {
//         int sum = 0;

//         while(n != 0)
//         {
//             sum += pow(n % 10,2);
//             n = n / 10;
//         }

//         return sum;
//     }

//     bool isHappy(int n) 
//     {
//         int slow = next(n);
//         int fast = next(next(n));

//         while(slow != fast)
//         {
//             slow = next(slow);
//             fast = next(next(fast));
//         }

//         return fast == 1 ;
//     }
    
    
    ////////////////////////////////////////////////////// Good and Direct approach //////////////////////////////////////////////
    
//      bool isHappy(int n) {
        
//         int count = 0;
//        while(n != 1)
//         {
//             int sum = 0;
//             while(n != 0)
//             {
//                 int num = n%10;
//                 sum += num*num;
//                 n/=10;
//                 count++;
//             }
//             n = sum;
//             if(count > 31)
//                 return false;
//         }
//         return true;
//      }
    
    
    ////////////////////////////////////////////////////////  Recursion //////////////////////////////////////////////////////////////
    
     bool isHappy(int n) {
       if(n == 1)
           return true;
        if(n < 5 && n != 1)
            return false;
        int sum = 0;
       while(n > 0 ) {
           sum += pow(n%10,2);
           n/=10;
       } 
        
        return isHappy(sum);
    }
};
