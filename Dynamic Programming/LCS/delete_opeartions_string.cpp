class Solution {
public:
    
    int lcs(string str1, string str2, int m, int n)
    {
        int L[m + 1][n + 1];
        int i, j;
     
        // Following steps build L[m+1][n+1] in bottom
        // up fashion. Note that L[i][j] contains
        // length of LCS of str1[0..i-1] and str2[0..j-1]
        for (i = 0; i <= m; i++) {
            for (j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    L[i][j] = 0;
     
                else if (str1.at(i - 1) == str2.at(j - 1))
                    L[i][j] = L[i - 1][j - 1] + 1;
     
                else
                    L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
     
        // L[m][n] contains length of LCS
        // for X[0..n-1] and Y[0..m-1]
        return L[m][n];
    }
    
    int minDistance(string str1, string str2) {
         int m = str1.size();
        int n = str2.size();
     
        int len = lcs(str1, str2, m, n);        
        int res = (m - len) + (n - len);          //https://media.geeksforgeeks.org/wp-content/uploads/20200817135845/picture2-660x402.jpg
        return res;
    }
};
