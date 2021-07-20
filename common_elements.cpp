class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        
        vector<int>ans;
        map<int,int>hash1,hash2;
        for(auto x : v1)
            hash1[x]++;
        for(auto x : v2)
            hash2[x]++;
        for(auto x : v1)
            if(hash2[x]-- > 0)
                ans.push_back(x);
        sort(ans.begin(),ans.end());
        return ans;
        
        
        *************************************************************************************
        
        
        unordered_map<int,int>mp;
        for(int i=0;i<v1.size();i++)
            mp[v1[i]]++;
        vector<int>v;
        for(int i=0;i<v2.size();i++)
        {
            if(mp.find(v2[i])!=mp.end()){
                v.push_back(v2[i]);
                mp[v2[i]]--;
                if(mp[v2[i]]==0)
                    mp.erase(v2[i]);
            }
        }
        sort(v.begin(),v.end());
        return v;
    
    
        *************************************************************************************
        
    
        int a[100001] = {0};
        vector<int> ans;
        for(int i=0; i<v1.size(); i++){
            a[v1[i]]++;
            
        }
        for(int i=0; i<v2.size();i++){
            if(a[v2[i]]> 0){
                ans.push_back(v2[i]);
                a[v2[i]]--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
