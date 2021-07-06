class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(auto i: strs)
        {
            string temp=i;
            sort(i.begin(),i.end());
            m[i].push_back(temp);
        }
        vector<vector<string>> res;
        for(auto it: m)
        {
            res.push_back(it.second);
        }
        return res;
    }
};
