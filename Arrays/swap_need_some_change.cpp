class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        int m=(sizeof_array-2);
       for(int i=0;i<m;i++)
       {
           swap(arr[i],arr[i+2]);
       }
        
    }
};
