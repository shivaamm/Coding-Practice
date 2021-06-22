class Solution{
public:
    int equalPartition(int n, int arr[])
    {
       
        int sum = 0;
        int i, j;
    
        // Calculate sum of all elements
        for (i = 0; i < n; i++)
            sum += arr[i];
    
        if (sum % 2 != 0)
            return false;
    
        bool part[sum / 2 + 1];
    
        // Initialize the part array
        // as 0
        for (i = 0; i <= sum / 2; i++) {
            part[i] = 0;
        }
    
        // Fill the partition table in bottom up manner
    
        for (i = 0; i < n; i++) {
            // the element to be included
            // in the sum cannot be
            // greater than the sum
            for (j = sum / 2; j >= arr[i];
                 j--) { // check if sum - arr[i]
                // could be formed
                // from a subset
                // using elements
                // before index i
                if (part[j - arr[i]] == 1 || j == arr[i])
                    part[j] = 1;
            }
        }
    
        return part[sum / 2];
    }
};
