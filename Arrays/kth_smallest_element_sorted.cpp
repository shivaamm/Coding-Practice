class Solution {
    int count(vector<vector<int>> &matrix, int x) {
        int c = 0;
        int n = matrix.size();
        int row = n-1;
        int col = 0;
        while(row>=0 && col<n) {
            if(matrix[row][col]>x) {
                row--;
            }
            else {
                c += row+1;
                col++;
            }
        }
        return c;
    }
    
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int high = matrix[n-1][n-1];
        int low = matrix[0][0];
        
        while(low<high) {
            int mid = low + (high-low)/2;
            int c = count(matrix, mid);
            if(c<k) {
                low = mid+1;
            }
            else {
                high = mid;
            }
        }
        return low;
    }
};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int> v;
        
        //Push all elements of matrix into a vector
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++)
                v.push_back(matrix[i][j]);
        }
        
        //Sort the elements and print the k-th element...
        sort(v.begin(), v.end());
        return v[k - 1];
    }
};
