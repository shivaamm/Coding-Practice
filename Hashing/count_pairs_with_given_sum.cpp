class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
    
    
        // map<int,int> mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[arr[i]]++;
        // }
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     mp[arr[i]]--;
        //     if(mp[k-arr[i]] >0)
        //     {
        //       // mp[k-arr[i]]--;
        //         count+=mp[k-arr[i]];
        //     }
        //     mp[arr[i]]++;
        // }
        // return count/2;
      
      **************************************************************
        
         int c = 0;
        unordered_map<int, int>ump;
        for(int i = 0; i < n; i++)
        {
            ump[arr[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            c += ump[k - arr[i]];
            
            if(k - arr[i] == arr[i])
                c--;
        }
        return c/2;
    
      ****************************************************************
    
    // run-time error code
    
    //    int count=0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     for(int j=i+1;j<n;j++)
	   //     {
	   //         if((arr[i]+arr[j])==k)
	   //         {
	   //             count++;
	   //         }
	   //     }
	   // }
	   // return count;
    }
};
