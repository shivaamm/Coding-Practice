Example 1:

Input: nums = {1, 2, 3}
Output: 14.000000
Explanation: {1}, {2}, {3},
{1, 2}, {2, 3}, {1, 3}, {1, 2, 3}
So average will be 1, 2, 3, 1.5, 
2.5, 2 and 2. Hence summation will be
1 + 2 + 3 + 1.5 + 2.5 + 2 + 2 = 14.0


// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	// Returns value of Binomial Coefficient C(n, k)
    int nCr(int n, int k)
    {
    	int C[n+1][k+1];
    	int i, j;
    
    	// Calculate value of Binomial Coefficient in bottom
    	// up manner
    	for (i = 0; i <= n; i++)
    	{
    		for (j = 0; j <= min(i, k); j++)
    		{
    			// Base Cases
    			if (j == 0 || j == i)
    				C[i][j] = 1;
    
    			// Calculate value using previously stored
    			// values
    			else
    				C[i][j] = C[i-1][j-1] + C[i-1][j];
    		}
    	}
    	return C[n][k];
    }
    
    // method returns sum of average of all subsets
    double AverageOfAllSubsets(vector<int>arr)
    {
        int N=arr.size();
    	double result = 0.0; // Initialize result
    
    	// Find sum of elements
    	int sum = 0;
    	for (int i = 0; i < N; i++)
    		sum += arr[i];
    
    	// looping once for all subset of same size
    	for (int n = 1; n <= N; n++)
    
    		/* each element occurs nCr(N-1, n-1) times while
    		considering subset of size n */
    		result += (double)(sum * (nCr(N - 1, n - 1))) / n;
    
    	return result;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		double ans = ob.AverageOfAllSubsets(nums);
		cout << fixed << setprecision(6) << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
