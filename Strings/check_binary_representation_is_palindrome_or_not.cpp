	// function to reverse bits of a number
        // unsigned int reverseBits(unsigned int n)
        // {
        //     unsigned int rev = 0;
         
        //     // traversing bits of 'n' from the right
        //     while (n > 0) {
         
        //         // bitwise left shift 'rev' by 1
        //         rev <<= 1;
         
        //         // if current bit is '1'
        //         if (n & 1 == 1)
        //             rev ^= 1;
         
        //         // bitwise right shift 'n' by 1
        //         n >>= 1;
        //     }
         
        //     // required number
        //     return rev;
        // }

// 	int binaryPalin (long long int n)
// 	{
// 	     unsigned int rev = reverseBits(n);
 
//         return (n == rev);
// 	}
    
    
    **************************************************************************************************************
    
    
	int binaryPalin (long long int n)
	{
        // `rev` stores reverse of a binary representation of `n`
        unsigned rev = 0;
     
        // do till all bits of `n` are processed
        unsigned k = n;
        while (k)
        {
            // add the rightmost bit to `rev`
            rev = (rev << 1) | (k & 1);
            k = k >> 1;     // drop last bit
        }
     
        // Returns true if `reverse(n)` is the same as `n`
        return n == rev;
	}
  
  
  ********************************************************************************************************************
  
  algo and full code
  
  Algorithm:

1)  Take the input.
2)  Create an array of length 8 to store 8 bit binary representation 
    of input number
3)  Use bitwise operators to convert into binary from
    a)  Initialize i to 7 (8-1)
    b)  Find ith bit & store in the array
        array[i]=n & 1
    c)  Right shift n & decrement i
        n=n>>1
    d)  IF n=0
            Break
        ELSE
        Repeat step b-d
    4)  Check the array where the binary representation is stored, 
        for palindrome
        a)  Set j= 0 & k=7 (8-1, 8 is the MAX SIZE)
        b)  IF (array [j]!= array [k])
            It's not a palindrome
        c)  IF j < k
                Increment j& decrement k
                Repeat b, c
            ELSE
                It's a palindrome
                
Example with explanation & code:

https://www.includehelp.com/c-programs/check-number-is-palindrome-or-not-using-bitwise-operator.aspx
