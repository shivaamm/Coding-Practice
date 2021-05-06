class Solution{
    public:
    int firstElement(int arr[], int n, int k)
    {
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        // for(auto it: mp)        // using iterator goves WA on this test case
        // {                        // 15 1
                                    // 7 6 7 10 3 2 8 9 4 7 2 5 2 8 4
        //     if(it.second==k)
        //         return it.first;
        //         break;
        // }
        for(int i=0;i<n;i++){
          if(mp[arr[i]]==k)
                return arr[i];
        }
        return -1;
    }
};
