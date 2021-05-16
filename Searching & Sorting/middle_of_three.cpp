class Solution{
  public:
    int middle(int a, int b, int c){
    //   // Checking for b
    //     if ((a < b && b < c) || (c < b && b < a))
    //       return b;
     
    //     // Checking for a
    //     else if ((b < a && a < c) || (c < a && a < b))
    //       return a;
     
    //     else
    //       return c;
    
    
    
    ****************************************** better - need less comparisons *******************************************
    
        // // Compare each three number to find middle
        // // number. Enter only if a > b
        // if (a > b)
        // {
        //     if (b > c)
        //         return b;
        //     else if (a > c)
        //         return c;
        //     else
        //         return a;
        // }
        // else
        // {
        //     // Decided a is not greater than b.
        //     if (a > c)
        //         return a;
        //     else if (b > c)
        //         return c;
        //     else
        //         return b;
        // }
        
        
        *********************************************** most efficient one *********************************************
        
             // x is positive if a is greater than b.
            // x is negative if b is greater than a.
            int x = a - b;
         
            int y = b - c;  // Similar to x
            int z = a - c;  // Similar to x and y.
         
            // Checking if b is middle (x and y both
            // are positive)
            if (x * y > 0)
                return b;
         
            // Checking if c is middle (x and z both
            // are positive)
            else if (x * z > 0)
                return c;
            else
                return a;
        
    
    }
};
