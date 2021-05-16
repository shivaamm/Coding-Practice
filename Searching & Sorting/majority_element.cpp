class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        if(n==1)
        return arr[0];
        
        sort(arr, arr+n); 
          
        int count = 1, max_ele = -1, temp = arr[0], ele, f=0; 
          
        for(int i=1;i<n;i++) 
        { 
    
            if(temp==arr[i]) 
            { 
                count++; 
            } 
            else
            { 
                count = 1; 
                temp = arr[i]; 
            } 
    
            if(max_ele<count) 
            { 
                max_ele = count; 
                ele = arr[i]; 
                  
                if(max_ele>(n/2)) 
                { 
                    f = 1; 
                    break; 
                } 
            } 
        } 
    
        return (f==1 ? ele : -1);
        
        
            
            // TLE
            
    //      int temp[100] = {0};
    //     for(int i = 0; i < size; ++i)
    //     {
    //         temp[a[i]]++;
    //         if(temp[a[i]] > (size/2)) return a[i];
    //     }
        
    //     return -1;
    // }
};
