class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        int maxm=0,i;
        unordered_map<int,int> a;
        for(i=0;i<n;i++)
        {
            if(a.find(arr[i])==a.end())   // if the element is aleady not present in map then insert index value in map
                a[arr[i]]=i;
            else
                maxm=max(maxm,i-a[arr[i]]);  // else we find the max here if element is already present
        }
        return maxm;
        
        *****************************************************************************************************************
        
        // unordered_map<int, vector<int>>hash;
        // int i;
        // for(i = 0; i < n; ++i){
        //     hash[arr[i]].push_back(i);
        // }
        // int m = INT_MIN, k;
        // for(auto it = hash.begin(); it != hash.end(); ++it){
        //     auto l = it->second.begin();
        //     auto r = it->second.end() - 1;
        //     k = (*r) - (*l);
        //     m = max(k, m);
        // }
        // return m;
        
        
        ****************************************************************************************************************
        
        
        // TLE code
        
        // int i,j,k=0,m;
        //  for(i=0;i<n;i++)
        //  {
        //     for(j=i;j<n;j++)
        //     {
        //         if(arr[i]==arr[j])
        //         {
        //             m=j-i;
        //         }
        //         if(k<m)
        //         k=m;
        //         else
        //         ;
        //     }
        //  }
        //  return k;
    }
};
