/*

QUESTION LINK - https://practice.geeksforgeeks.org/problems/word-search/1

    Time Complexity:  O(N*M*4^L), where L is the length of the word. And we are searching for the letter N*M
    times in the worst case. Here 4 in 4^K is because at each level of our decision tree we are making 4
    recursive calls which equal 4^K in the worst case.

    Space Complexity : O(L) : where L is the length of the given word. This space is used for recursion stack.

    Solved using Matrix + Backtracking.

*/

class Solution {
private:
    bool checkWordPresent(vector<vector<char>>& board, string word, int n, int m, int row, int col, int index){
        if(index == word.size()){
            return true;
        }
        if(row < 0 || col < 0 || row >= n || col >= m || board[row][col] != word[index]){
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '*';
        bool ans1 = checkWordPresent(board, word, n, m, row+1, col, index+1);
        bool ans2 = checkWordPresent(board, word, n, m, row, col+1, index+1);
        bool ans3 = checkWordPresent(board, word, n, m, row-1, col, index+1);
        bool ans4 = checkWordPresent(board, word, n, m, row, col-1, index+1);
        board[row][col] = temp;
        return ans1 || ans2 || ans3 || ans4;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(checkWordPresent(board, word, n, m, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
