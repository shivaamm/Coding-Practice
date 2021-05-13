class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        //  long long a[n];
         
        // for(int i=0;i<n;i++)
        //   a[i]=arr[arr[i]];
        
        // for(int i=0;i<n;i++)
        //     arr[i]=a[i];
        
        
        ***********************************************************************************
        
        
        // First step: Increase all values by (arr[arr[i]]%n)*n 
        for (int i = 0; i < n; i++)
        {
            arr[i] += (arr[arr[i]]%n) * n;
        }
        // Second Step: Divide all values by n
        for (int i = 0; i < n; i++)
        {
            arr[i] /= n;
        }
        
    }
};
