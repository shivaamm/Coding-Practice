class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        if(sizeOfArray-1 == index)
        {
            arr[index] = element;
            return;
            
        }
        else{
           
            
            arr[sizeOfArray-1]=-1;
            for(int i=sizeOfArray-1; i>index; i--)
            {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
            arr[index] = element;
            
        }
        
    }
};
