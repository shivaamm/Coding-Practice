class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int m, int n)
    {
       vector<int> suffix(1005);
        long long total_pairs = 0;
        for (int i = 0; i < n; i++)
            suffix[Y[i]]++;
     
        // Compute suffix sums till i = 3
        for (int i = 1e3; i >= 3; i--)
            suffix[i] += suffix[i + 1];
     
        for (int i = 0; i < m; i++) {
     
            // Base Case: x = 0
            if (X[i] == 0)
     
                // No valid pairs
                continue;
     
            // Base Case: x = 1
            else if (X[i] == 1) {
     
                // Store the count of 0's
                total_pairs += suffix[0];
                continue;
            }
     
            // Base Case: x = 2
            else if (X[i] == 2)
     
                // Store suffix sum upto 5
                total_pairs += suffix[5];
     
            // Base Case: x = 3
            else if (X[i] == 3)
     
                // Store count of 2 and
                // suffix sum upto 4
                total_pairs += suffix[2]
                               + suffix[4];
     
            // For all other values of x
            else
                total_pairs += suffix[X[i] + 1];
     
            // For all x >=2, every y = 0
            // and every y = 1 makes a valid pair
            total_pairs += suffix[0] + suffix[1];
        }
     
        // Return the count of pairs
        return total_pairs;
    }
};
