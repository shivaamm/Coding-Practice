/*

QUESTION LINK - https://practice.geeksforgeeks.org/problems/word-search/1    GFG
QUESTION LINK - https://leetcode.com/problems/word-search/description/      LEETCODE

    Time Complexity:  O(N*M*4^L), where L is the length of the word. And we are searching for the letter N*M
    times in the worst case. Here 4 in 4^K is because at each level of our decision tree we are making 4
    recursive calls which equal 4^K in the worst case.

    Space Complexity : O(L) : where L is the length of the given word. This space is used for recursion stack.

    Solved using Matrix + Backtracking.

*/


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool wordmke(vector<vector<char>>&board,int idx,string word,int row ,int col){
    if(idx==word.size()){
        return true;
    }
    if(idx==0){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[idx]){
                    board[i][j]='.';
                    if(wordmke(board,idx+1,word,i+1,j)==true)return true;
                    if(wordmke(board,idx+1,word,i-1,j)==true)return true;
                    if(wordmke(board,idx+1,word,i,j+1)==true)return true;
                    if(wordmke(board,idx+1,word,i,j-1)==true)return true;
                    board[i][j]=word[idx];
                }
            }
        }
    }
    else{
        if(row<0||col<0||row>board.size()-1||col>board[0].size()-1)return false;
        if(board[row][col]==word[idx]){
            board[row][col]='.';
            if(wordmke(board,idx+1,word,row+1,col)==true)return true;
            if(wordmke(board,idx+1,word,row-1,col)==true)return true;
            if(wordmke(board,idx+1,word,row,col+1)==true)return true;
            if(wordmke(board,idx+1,word,row,col-1)==true)return true;
            board[row][col]=word[idx];
        }
        else return false;
    }
    return false;
}
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        if(wordmke(board,0,word,0,0))return true;
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends


**************************************************************************************************************************************8
    
    

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
