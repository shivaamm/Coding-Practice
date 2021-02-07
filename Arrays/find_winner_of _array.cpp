https://leetcode.com/problems/find-the-winner-of-an-array-game/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int k1=k, win=arr[0];
        for(int i=1; i<arr.size() && k1; i++){
            if(win<arr[i]){
                win=arr[i];
                k1=k;
            }
            k1--;
        }
        return win;
    }
};

