class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>mp;
        for(int i=0;i<logs.size();i++)
            mp[logs[i][0]].insert(logs[i][1]);
        vector<int>v(k,0);
        for(auto i:mp)
            v[i.second.size()-1]++;
        return v;
    }
};


        unordered_map<int,set<int>> map;
        vector<int> res(k,0);
        for(auto &log : logs){
            map[log[0]].insert(log[1]);
        }
        for(auto i : map){
            res[i.second.size()-1]++;
        }
        return res;
