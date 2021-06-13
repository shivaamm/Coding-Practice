class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	   // // time complexity of this code is O(n3)
    //     int ans = 0;
     
    //     // Fix the first element as A[i]
    //     for (int i = 0; i < n-2; i++)
    //     {
    //       // Fix the second element as A[j]
    //       for (int j = i+1; j < n-1; j++)
    //       {
    //           // Now look for the third number
    //           for (int k = j+1; k < n; k++)
    //               if (arr[i] + arr[j] + arr[k] < sum)
    //                   ans++;
    //       }
    //     }
     
    //     return ans;
    
    
    *********************************************** O(n2) ****************************************
        
        
        // Sort input array
        sort(arr, arr+n);
     
        // Initialize result
        int ans = 0;
     
        // Every iteration of loop counts triplet with
        // first element as arr[i].
        for (int i = 0; i < n - 2; i++)
        {
            // Initialize other two elements as corner elements
            // of subarray arr[j+1..k]
            int j = i + 1, k = n - 1;
     
            // Use Meet in the Middle concept
            while (j < k)
            {
                // If sum of current triplet is more or equal,
                // move right corner to look for smaller values
                if (arr[i] + arr[j] + arr[k] >= sum)
                    k--;
     
                // Else move left corner
                else
                {
                    // This is important. For current i and j, there
                    // can be total k-j third elements.
                    ans += (k - j);
                    j++;
                }
            }
        }
        return ans;
    
	}
		 

};
