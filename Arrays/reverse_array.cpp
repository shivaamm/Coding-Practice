void reverseArray(int arr[], int n) {
    //   int high = n-1;
    //   int low = 0;

    //       while( low < high )
    //       {
    //           int temp = arr[low];
    //           arr[low] = arr[high];
    //           arr[high] = temp;
    //           low++;
    //           high--;
    //       }
        
        ********************************************************
        
        
    int low = 0, high = n-1;
    while(low<high)
    swap(arr[low++],arr[high--]);
}
