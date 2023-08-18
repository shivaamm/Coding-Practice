class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> graph(n);
        
        for (const auto& road : roads) {
            int a = road[0];
            int b = road[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        int maxRank = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int rank = graph[i].size() + graph[j].size();
                if (find(graph[i].begin(), graph[i].end(), j) != graph[i].end() ||
                    find(graph[j].begin(), graph[j].end(), i) != graph[j].end()) {
                    rank--;
                }
                maxRank = max(maxRank, rank);
            }
        }
        
        return maxRank;
    }
};
