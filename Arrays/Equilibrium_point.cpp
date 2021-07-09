class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        
         int sum = 0; // initialize sum of whole array
        int leftsum = 0; // initialize leftsum
     
        /* Find sum of the whole array */
        for (int i = 0; i < n; ++i)
            sum += arr[i];
     
        for (int i = 0; i < n; ++i)
        {
            sum -= arr[i]; // sum is now right sum for index i
     
            if (leftsum == sum)
                return i+1;
     
            leftsum += arr[i];
        }
     
        /* If no equilibrium index found, then return 0 */
        return -1;
    }

};
