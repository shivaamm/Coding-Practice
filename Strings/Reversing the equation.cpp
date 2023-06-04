//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            string result;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
             
            // A space marks the end of the word
            if (s[i] == '+' || s[i] == '-' ||
                s[i] == '/' || s[i] == '*') {
                 
                // insert the word at the beginning
                // of the result string
                result.insert(result.begin(),
                    s.begin() + j, s.begin() + i);
                j = i + 1;
                 
                // insert the symbol
                result.insert(result.begin(), s[i]);
            }
        }
         
        // insert the last word in the string
        // to the result string
        result.insert(result.begin(), s.begin() + j,
                                         s.end());
        return result;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
