class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        
//         int n = matrix.size();
//         int a = 0;
//         int b = n-1;
//         while(a<b){
//             for(int i=0;i<(b-a);++i){
//                 swap(matrix[a][a+i], matrix[a+i][b]);
//                 swap(matrix[a][a+i], matrix[b][b-i]);
//                 swap(matrix[a][a+i], matrix[b-i][a]);
//             }
//             ++a;
//             --b;
//         }
        
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
