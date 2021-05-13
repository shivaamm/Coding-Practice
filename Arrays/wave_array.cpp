class Solution{
    public:
    // Function to convert given array to wave like array
    // arr: input array
    // n: size of array
    
    void convertToWave(int *arr, int n){
    
    // Your code here
        if(n == 1){
            return;
        }
        for(int i = 0; i < n-1; i += 2){
            swap(arr[i], arr[i+1]);
        }
    }
    
    
    ****************************************************************
        
    
    void convertToWave(int *arr, int n){
        
       sort(arr, arr + n);
       for (int i=0; i<n-1; i += 2) 
        swap(&arr[i], &arr[i+1]); 
        
    }
    void swap(int *x, int *y) 
    { 
        int temp = *x; 
        *x = *y; 
        *y = temp; 
    } 
};
