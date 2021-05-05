class Solution {
public:
    bool canWinNim(int n) {
        return n%4 ;
        
        // or Instead of do modular division by 4 we could just calculate binary and with 3.
        //  return n & 3; 
    }
};


// Base case :

// If the numbers of stones are 1,2 or 3, then player 1 will win.

// If the numbers of stones are 4, then player 1 will lose irrespective of the number of stones he/she remove

// So lookup table will look like this : W[1]->W[2]->W[3]->L[4].
// For num_stones=5, the player can either remove 1,2 or 3 stones i.e. the other player (player 2) will win if the number of stones left are 1,2 or 3 and will lose only when the number of stones left are 4 ( see the lookup table in step 1) .
// So, if Player1 remove 1 stone, the number of stones left will be 4, which will defeat player2. So, now the lookup entry for num_stones=5 will be W.
// Lookup now will look like this : W->W->W->L->W (for player 1-> who is taking the first chance).
// Likewise, we can fill the complete lookup table by looking at the values at last three index. If anyone of them is L => Player 1 will win the game as he will remove only that many number of stones which will bring player 2 to the L position
// In the end, you will notice that only positions 4->8->12->16 will contain L for player 1 thus answer is simple n%4.
