class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
        
        // Two people climb from left and from right separately.
        //  If they are climbing the same mountain,
        //  they will meet at the same point.
        
        
         int n = A.size(), i = 0, j = n - 1;
        while (i + 1 < n && A[i] < A[i + 1]) i++;
        while (j > 0 && A[j - 1] > A[j]) j--;
        return i > 0 && i == j && j < n - 1;
        
        
        
        

        
//      // Edge case:
//         if (arr.size() <= 1)
//             return false;
        
//         int i = 0;
        
//         // Go while there's a hill up, untill we reach peak:
//         while (i < arr.size()-1 && arr[i] < arr[i+1])
//             i++;
           
//         // Peak can't be the first or last:
//         if (i == 0 || i == arr.size()-1)
//             return false;
        
//         // Walk downhill:
//         while (i < arr.size()-1 && arr[i] > arr[i+1])
//             i++;
        
//         // If there's a larger number after we started walking down, this will be false:
//         return i == arr.size()-1;
    }
};
