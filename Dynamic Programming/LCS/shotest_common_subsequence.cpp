class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(X[i-1] == Y[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return m+n-dp[m][n];    ///////     formula - [(m+n)-lcs]  // lcs gives the common string and subtracting that common string gives output
    }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// C++ program to find length of the
// shortest supersequence
#include <bits/stdc++.h>
using namespace std;

// Utility function to get max
// of 2 integers
int max(int a, int b) { return (a > b) ? a : b; }

// Returns length of LCS for
// X[0..m - 1], Y[0..n - 1]
int lcs(char* X, char* Y, int m, int n);

// Function to find length of the
// shortest supersequence of X and Y.
int shortestSuperSequence(char* X, char* Y)
{
	int m = strlen(X), n = strlen(Y);

	// find lcs
	int l = lcs(X, Y, m, n);

	// Result is sum of input string
	// lengths - length of lcs
	return (m + n - l);
}

// Returns length of LCS
// for X[0..m - 1], Y[0..n - 1]
int lcs(char* X, char* Y, int m, int n)
{
	int L[m + 1][n + 1];
	int i, j;

	// Following steps build L[m + 1][n + 1]
	// in bottom up fashion. Note that
	// L[i][j] contains length of LCS of
	// X[0..i - 1] and Y[0..j - 1]
	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	// L[m][n] contains length of LCS
	// for X[0..n - 1] and Y[0..m - 1]
	return L[m][n];
}

// Driver code
int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";

	cout << "Length of the shortest supersequence is "
		<< shortestSuperSequence(X, Y) << endl;

	return 0;
}

// This code is contributed by Akanksha Rai
