https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays#


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    int msf=0;
    int meh=0;
    
    for(int i=0;i<n;i++){
        meh=meh+arr[i];
        if(msf<meh)
            msf=meh;
        if(meh<0)
            meh=0;
    }
    return msf;
    
    
    /////////////////////////////////////////////////////////   for gfg ///////////////////////
    
    
        int max_global,max_current;
        max_global=max_current=arr[0];
        
        for(int i=1; i<n; i++){
            
            max_current = max(arr[i], max_current+arr[i]);
            
            if(max_current>max_global){
                max_global = max_current;
            }
        }
        return max_global;
    
    
    
}
