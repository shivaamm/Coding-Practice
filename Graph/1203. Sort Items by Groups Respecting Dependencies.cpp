class Solution {
private:
    bool topologicalSort(const vector<vector<int>>& graph, vector<int>& indegree, vector<int>& result) {
        queue<int> q;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            result.push_back(u);
            for (const auto v : graph[u]) {
                indegree[v]--;
                if (indegree[v] == 0) {
                    q.push(v);
                }
            }
        }
        
        return result.size() == indegree.size();
    }
    
public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {         
        int group_id = m;
        for (auto& id : group) {
            if (id == -1) {
                id = group_id++;
            }
        }
        
        vector<vector<int>> item_graph(n);
        vector<int> item_indegree(n, 0);
        
        vector<vector<int>> group_graph(group_id);
        vector<int> group_indegree(group_id, 0);
        
        for (int i = 0; i < n; i++) {
            for (const auto item : beforeItems[i]) {
                item_graph[item].push_back(i);
                item_indegree[i]++;
                if (group[i] != group[item]) {
                    group_graph[group[item]].push_back(group[i]);
                    group_indegree[group[i]]++;
                }
            }
        }
        
        vector<int> item_sorted;
        item_sorted.reserve(n);
        if (!topologicalSort(item_graph, item_indegree, item_sorted)) {
            return {};
        }
        vector<int> group_sorted;
        group_sorted.reserve(group_id);
        if (!topologicalSort(group_graph, group_indegree, group_sorted)) {
            return {};
        }
        vector<vector<int>> group_map(group_id);
        for (const auto item : item_sorted) {
            group_map[group[item]].push_back(item);
        }
        vector<int> result;
        result.reserve(n);
        for (const auto id : group_sorted) {
            result.insert(result.end(), group_map[id].begin(), group_map[id].end());
        }
        
        return result;
    }
};
