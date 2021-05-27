class Solution{
  public:
    int immediateGreater(int arr[], int n, int x){
        // int diff = INT_MAX;
        // int result = -1;
        //  for(int i=0; i<n; i++)
        //  {
        //      if( (arr[i] > x) && (abs(arr[i] - x) < diff))
        //      {
        //          result = arr[i];
        //          diff = abs(arr[i] - x);
        //      }
        //  }
        // return result;
        
        
        ********************************************************************************
        
         int i,max=-1;
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            if(arr[i]>x)
            {
                max=arr[i];
                break;
            }
        }
        return max;
    }
};
