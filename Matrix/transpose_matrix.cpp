class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>>mat(n,vector<int>(m,0));    // create new matrix
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[j][i]=matrix[i][j];   // filling the transposed matrix into new matrix(mat)
            }
        }
        return mat;
    }
};
