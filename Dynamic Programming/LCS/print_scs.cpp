class Solution {
public:
    string shortestCommonSupersequence(string X, string Y) {
       int n=X.size(), m=Y.size();
	int t[n+1][m+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++){
			if(i==0||j==0)
				t[i][j]=0;
		}
		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(X[i-1]==Y[j-1])
				t[i][j]= 1+t[i-1][j-1];
			else
				t[i][j]= max(t[i-1][j],t[i][j-1]);
		}
		
	int i=n,j=m;
	string s;
	while(i>0&&j>0){
		if(X[i-1]==Y[j-1]){
			s += X[i - 1];
			i--, j--;
		}
		else
		{
			if(t[i][j-1]>t[i-1][j]){
				s += Y[j - 1];
				j--;
			}
			else{
				s += X[i - 1];
				i--;
			}
		}
	}
	
	while(i>0){
		s.push_back(X[i-1]);
		i--;
	}
	
	while(j>0){
		s.push_back(Y[j-1]);
		j--;
	}
	reverse(s.begin(), s.end());
	return s; 
    }
};




///////////////////////////////////////////////////////////////////////////////////////   same code but with comments   //////////////////////////////////////////



class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        // fill the dp table
        int dp[m + 1][n + 1];
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        string ans;
        int i = m, j = n;
        while(i > 0 && j > 0)
        {
            // If current character in both the strings are same, then current character is part of shortest supersequence
            if(str1[i - 1] == str2[j - 1])
            {
                ans.push_back(str1[i-1]);
                i--;
                j--;
            }
            // If current character in X and Y are different & we are moving upwards
            else if(dp[i - 1][j] > dp[i][j - 1])
            {
                ans.push_back(str1[i - 1]);
                i--;
            }
            // If current character in X and Y are different & we are moving leftwards
            else
            {
                ans.push_back(str2[j - 1]);
                j--;
            }
        }
        // If str2 reaches its end, put remaining characters of str1 in the result string
        while(i > 0)
        {
            ans.push_back(str1[i - 1]);
            i--;
        }
        // If str1 reaches its end, put remaining characters of str2 in the result string
        while(j > 0)
        {
            ans.push_back(str2[j - 1]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
