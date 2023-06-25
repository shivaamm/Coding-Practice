class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        for(int i=0;i<row;i++) {
             vector<int>list;
            for(int j=0;j<col;j++) list.push_back(M[i][j]);
            if(!mp.count(list)) ans.push_back(list);
            mp[list] = i;
        }
        return ans;
    }
};
