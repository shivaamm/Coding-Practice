class Solution{
    public:
    vector<int> countFreq(int a[], int n) 
    { 
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int x=0;
        for(auto i: mp){
            x+=i.second;
            v.push_back(x);
        }
        return v;
    } 
};
