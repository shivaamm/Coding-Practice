class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<int> dis(N,1e8);
        dis[0] = 0; // distance of source node is 0
        for(int i=1;i<=N;i++)
        {
            for(auto edg:edges)
            {
                int u = edg[0];int v = edg[1];int wt = edg[2];
                if(dis[u]+wt<dis[v])
                dis[v] = dis[u]+wt;
            }
        }
         for(int i=0;i<dis.size();i++)
        {
            if(dis[i]==1e8)
            dis[i]= -1;
        }
        return dis;
    }
  
};
