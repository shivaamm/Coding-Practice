The idea is to sort the array and traverse the sorted array to count the number of such subsets. To count the number of such subsets, 
we need to count the consecutive numbers such that the difference between them is not equal to one.
Following is the algorithm for the finding number of subset containing consecutive numbers: 

1. Sort the array arr[ ] and count = 1.
2. Traverse the sorted array and for each element arr[i].
   If arr[i] + 1 != arr[i+1], 
       then increment the count by one.
3. Return the count. 

         
Example 1:

Input:
N = 10
Arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103} 
Output:
3
Explanation:
{5, 6, 7}, { 56, 57, 58}, {100, 101, 102, 103} are
3 subset in which numbers are consecutive.
  
  
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Sort the array so that elements which are
        // consecutive in nature became consecutive
        // in the array.
        sort(arr, arr + n);
     
        int count = 1; // Initialize result
        for (int i = 0; i < n - 1; i++) {
            // Check if there is beginning of another
            // subset of consecutive number
            if (arr[i] + 1 != arr[i + 1])
                count++;
        }
     
        return count;
    }
};
