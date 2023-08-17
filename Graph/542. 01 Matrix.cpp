class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return matrix;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> distances(rows, vector<int>(cols, 0));
        queue<pair<int, int>> q;
        
        // Enqueue all 0 cells and set their distances to 0
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    q.push({i, j});
                } else {
                    distances[i][j] = INT_MAX;
                }
            }
        }
        
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        // Perform BFS to calculate distances
        while (!q.empty()) {
            auto cell = q.front();
            q.pop();
            int x = cell.first;
            int y = cell.second;
            for (auto dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;
                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                    if (distances[nx][ny] > distances[x][y] + 1) {
                        distances[nx][ny] = distances[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        
        return distances;
    }
};
