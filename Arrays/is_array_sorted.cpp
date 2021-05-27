class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
      
      int inc = 1, dec = 1;
        for(int i=0;i<n-1;i++)
            if(arr[i] > arr[i+1])
            {
                inc = 0;
                break;
            }
        
        
        for(int i=0;i<n-1;i++)
            if(arr[i] < arr[i+1])
            {
                dec =0;
                break;
            }
        return inc || dec ;
       
    }
};
