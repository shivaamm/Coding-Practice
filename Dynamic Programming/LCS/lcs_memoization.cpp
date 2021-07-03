// C++ program to memoize
// recursive implementation of LCS problem
#include <bits/stdc++.h>
using namespace std;

const int maximum = 1000;

// Returns length of LCS for X[0..m-1], Y[0..n-1] */
// memoization applied in recursive solution
int lcs(string X, string Y, int m, int n, int dp[][maximum])
{
	// base case
	if (m == 0 || n == 0)
		return 0;

	// if the same state has already been
	// computed
	if (dp[m - 1][n - 1] != -1)
		return dp[m - 1][n - 1];

	// if equal, then we store the value of the
	// function call
	if (X[m - 1] == Y[n - 1]) {

		// store it in arr to avoid further repetitive
		// work in future function calls
		dp[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1, dp);

		return dp[m - 1][n - 1];
	}
	else {

		// store it in arr to avoid further repetitive
		// work in future function calls
		dp[m - 1][n - 1] = max(lcs(X, Y, m, n - 1, dp), lcs(X, Y, m - 1, n, dp));

		return dp[m - 1][n - 1];
	}
}

// Driver Code
int main()
{

	string X = "AGGTAB";
	string Y = "GXTXAYB";
	int m = X.length();
	int n = Y.length();

	int dp[m][maximum];

	// assign -1 to all positions
	memset(dp, -1, sizeof(dp));

	cout << "Length of LCS: " << lcs(X, Y, m, n, dp);

	return 0;
}
