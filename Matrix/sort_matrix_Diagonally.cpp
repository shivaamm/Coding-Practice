class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//         unordered_map<int, vector<int> > tmp;
//         int m = mat.size(), n = mat[0].size();
        
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 tmp[i-j].push_back(mat[i][j]);
//             }
//         }
        
//         for(int i = 1-n; i < m; i++) {
//             sort(tmp[i].begin(),tmp[i].end());
//         }

//         for(int i = m-1; i >= 0; i--) {
//             for(int j = n-1; j >= 0; j--) {
//                 mat[i][j] = tmp[i-j].back();
//                 tmp[i-j].pop_back();
//             }
//         }

//         return mat;


        ***************************************************************************************************

        
//         unordered_map<int, vector<int> > tmp;
//         int m = mat.size(), n = mat[0].size();
        
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 tmp[i-j].push_back(mat[i][j]);
//             }
//         }
        
//         for(int i = 1-n; i < m; i++) {
//             sort(tmp[i].begin(),tmp[i].end());
//         }

//         for(int i = m-1; i >= 0; i--) {
//             for(int j = n-1; j >= 0; j--) {
//                 mat[i][j] = tmp[i-j].back();
//                 tmp[i-j].pop_back();
//             }
//         }

//         return mat;
        
        ***************************************************************************************************
        
        int r = mat.size();
        int c = mat[0].size();
        int x, y;
        // moving columnwise
        for(int i = 0; i < c; i++) {
            vector<int> temp;
            x = i;
            y = 0;
            while(x < c && y < r) {
                temp.push_back(mat[y][x]);
                x++;
                y++;
            }
            sort(temp.begin(), temp.end());
            x = i;
            y = 0;
            int j = 0;
            while(x < c && y < r) {
                mat[y][x] = temp[j];
                x++;
                y++;
                j++;
            }
        }
        // moving rowwise
        for(int i = 1; i < r; i++) {
            vector<int> temp;
            x = 0;
            y = i;
            while(x < c && y < r) {
                temp.push_back(mat[y][x]);
                x++;
                y++;
            }
            sort(temp.begin(), temp.end());
            x = 0;
            y = i;
            int j = 0;
            while(x < c && y < r) {
                mat[y][x] = temp[j];
                x++;
                y++;
                j++;
            }
        }
        return mat;
    }
};
