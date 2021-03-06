https://leetcode.com/problems/1-bit-and-2-bit-characters/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
         int twoJump = 0; // flag to indicate jump count
        for(int i=0; i<bits.size() ;){
            if(bits[i] == 0){
                twoJump = 0;
                i++;
            }
            
            else{
                twoJump = 1;
                i+=2;
            }
        }
        return !twoJump;
        
    //    *****this approach solves all test cases except one (1,0)********
//             int n=bits.size();
       
//         if(n%2==0)
//         {
            
//             int secondToLast = bits[bits.size() - 2];
//             cout<<secondToLast;
            
//             if(n>2 && secondToLast!='0')
//                 return false;
//             else
//                 return true;
//         }
//         else{
//             return true;
//         }
    
    }
};
