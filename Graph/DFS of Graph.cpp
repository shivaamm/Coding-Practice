class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int vertex, vector<int> g[], vector<int> &v, vector<bool> &vis){
        vis[vertex]=true;
        v.push_back(vertex);
        for(auto child: g[vertex]){
            if (vis[child]) continue;
            dfs(child, g, v, vis);
        }
    }
    vector<int> dfsOfGraph(int n, vector<int> g[]) {
        vector<int> v;
        vector<bool> vis(n, false);
        dfs(0, g, v, vis);
        return v;
    }
};
