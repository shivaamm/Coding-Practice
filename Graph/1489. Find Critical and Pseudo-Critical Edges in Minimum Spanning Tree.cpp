class UnionFind {
public: 
    vector<int> parent; 
    UnionFind(int n){
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i] = i; 
    }
    
    int findParent(int p) {
        return parent[p] == p ? p : parent[p] = findParent(parent[p]); 
    }
    
    void Union(int u , int v) {
        int pu = findParent(u) , pv = findParent(v); 
        parent[pu] = pv;
    }    
};

class Solution {
public:    
    static bool cmp(vector<int>&a , vector<int>&b) {
        return a[2] < b[2]; 
    }
    
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<int> critical ,  pscritical ;
        //1
        for(int i=0;i<edges.size();i++)
            edges[i].push_back(i); 
        
        //2 
        sort(edges.begin() , edges.end() , cmp) ;
        
        int mstwt = findMST(n,edges,-1,-1); //3
        for(int i=0;i<edges.size();i++){
            if(mstwt< findMST(n,edges,i,-1)) //5
                critical.push_back(edges[i][3]); 
            else if(mstwt == findMST(n,edges,-1,i))  //6
                pscritical.push_back(edges[i][3]);
        }
        return {critical , pscritical};         
    }
    
private:
    int findMST(int &n ,  vector<vector<int>>& edges , int block , int e) {
        UnionFind uf(n); 
        int weight = 0 ;
        if(e != -1) {
            weight += edges[e][2]; 
            uf.Union(edges[e][0] , edges[e][1]); 
        }
        
        for(int i=0;i<edges.size();i++){
            if(i == block) 
                continue; 
            if(uf.findParent(edges[i][0]) == uf.findParent(edges[i][1])) //4
                continue; 
            uf.Union(edges[i][0] , edges[i][1]); 
            weight += edges[i][2]; 
        }
        
        //Check if all vertices are included then only it is MST. 
        for(int i=0;i<n;i++){
            if(uf.findParent(i) != uf.findParent(0))
                return INT_MAX;
        }    
        
        return weight; 
    }
    
};
