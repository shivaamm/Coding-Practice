//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort (chairs.begin(),chairs.end());
        sort (passengers.begin(), passengers.end());
        int sum=0;
        for (int i=0;i<n;i++){
            sum=sum+abs(chairs[i]-passengers[i]);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> chairs(n), passengers(n);
        for (auto &val : chairs) cin >> val;
        for (auto &val : passengers) cin >> val;
        int ans = sol.findMoves(n, chairs, passengers);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
