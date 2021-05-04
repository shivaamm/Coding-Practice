class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool compare(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second)
        return a.first<b.first;
        return a.second>b.second;
    }
    
    vector<int> sortByFreq(int arr[],int n)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
            
        vector<pair<int,int>> vt(mp.begin(),mp.end());
        vector<int> a;
        
        sort(vt.begin(),vt.end(),compare);
        
        for(auto it=vt.begin();it!=vt.end();it++)
        {
            int max=0;
            while(max<it->second){
                a.push_back(it->first);
                max++;
            }
        }
        return a;
    }
};
