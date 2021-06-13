 Inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. 
 If an array is sorted in the reverse order then the inversion count is the maximum. 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
 
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.
 
Example 3:

Input: N = 3, arr[] = {10, 10, 10}
Output: 0
Explanation: As all the elements of array 
are same, so there is no inversion count.

class Solution{
  public:
    // Function to find inversion count in the array
    
    // arr[]: Input Array
    // N : Size of the Array arr[]
    long long my_counter = 0;
    
    // Function to merge two parts of array
    // p: initial point in the array, say left index
    // q: mid point
    // r: higher range
    void merge(long long a[], long long p, long long q, long long r){
        long long l = q-p+1;
        long long a1[l];
    
        long long l2 = r-q;
        
        long long a2[l2];
        
        // storing elements on left half from a to a1
        for(long long i = 0;i<l;i++){
            a1[i] = a[i+p];
        }
        
        // storing elements on right half from a to a2
        for(long long i = 0;i<l2;i++){
            a2[i] = a[q+i+1];
        }
        
        long long left = 0, right = 0, k = p;
        
        // merge while indexes are valid
        while(left < l && right < l2)
        {
            // comparing element of a1 and a2
            // and accordingly storing in a
            if(a1[left] <= a2[right]){
                a[k] = a1[left];
                left++;
            }
            else{
                a[k] = a2[right];
                right++;
                
                // add the inversions that cross between 
                // the first half and second half
                my_counter += (l-left); // Increementing counter
            }
            k++;
        }
        
        // store the rest elements
        while(left < l){
            a[k++] = a1[left++];
          
        }
        
        // store the rest elements 
        while(right < l2){
            
            a[k++] = a2[right++];
        }
    }
    
    // Function to mergesort a[], which use 
    // divide and conquer for left and right mergesort
    // operation
    void mergeSort(long long a[], long long p, long long r)
    {
        
        if(p < r)
        {
            // mid
            long long q = (p+r)/2;
            
            // calling for left half
            mergeSort(a, p, q);
            
            // calling for right half
            mergeSort(a, q+1, r);
            
            // after sorting, need to call merge funtion
            merge(a, p, q, r);
        }
    }
    
    // base function which calls the other utility function
    // to find the number of inversions
    long long int inversionCount(long long arr[],long long N)
    {
        mergeSort(arr,0,N-1);
        long long int res = my_counter;
        my_counter = 0;
        return res;
    }


};





***************************************************************************************************************

ll int merge(int a[], ll int s, ll int e) {
    ll int mid  = s+ (e-s)/2;
    ll int i=s, j = mid +1, k=s;
    int temp[1000000];
    ll int cnt = 0;
    
    while(i <= mid and j <=e) {
        if(a[i] <= a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        }
        else {
            temp[k++] = a[j++];
            cnt += mid -i +1;
        }
    }
    while(i<=mid) {
        temp[k++] = a[i++];
    }
    
    while(j<=e) {
        temp[k++] = a[j++];
    }
    for(int i=s;i<=e;i++) {
        a[i] = temp[i];
    }
    return cnt;
}

ll int inversion_count( int a[], ll int s,ll int e) {
    if(s >= e) {
        return 0;
    }
    ll int mid = s + (e- s) /2;
    ll int x = inversion_count(a ,s, mid);
    ll int y = inversion_count(a , mid+1, e);
    ll int z = merge(a,s,e);
    return x +y+ z;
}
