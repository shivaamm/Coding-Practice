class Solution
{
  public:
    // int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    int countPairs(int a[], int b[],  int n, int m, int x) 
    { 
         int i = 0;
        int j = m-1;
        int res = 0;
        while (i < n && j > -1) {
            int s = a[i]+b[j];
            if (s == x) {
                res++;
                i++; j--;
            } else if (s < x) {
                i++;
            } else {
                j--;
            }
        }
        return res;
        
    }
    
    
    
    ****************************************************************************************
    
    
    int countPairs(int arr1[], int arr2[], int m, int n, int x)
    {
      int count = 0; 
      int l = 0, r = n - 1;

      // traverse 'arr1[]' from 
      // left to right
      // traverse 'arr2[]' from 
      // right to left
      while (l < m && r >= 0)
      {
        // if this sum is equal 
        // to 'x', then increment 'l', 
        // decrement 'r' and
        // increment 'count'
        if ((arr1[l] + arr2[r]) == x)
        {
          l++; r--;
          count++;		 
        }

        // if this sum is less 
        // than x, then increment l
        else if ((arr1[l] + arr2[r]) < x)
          l++;

        // else decrement 'r' 
        else
          r--; 
      }

      // required count of pairs	 
      return count;
    }
};
