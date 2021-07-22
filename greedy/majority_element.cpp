class Solution{
  public:
     // Function to find majority element in the array
    int majorityElement(int a[], int n)
    {
         map<int,int> m;
         for(int i=0;i<n;i++){
	        m[a[i]]++ ;
	    }
	    int mx = INT_MIN , val ;
	    
	    for(auto it=m.begin();it!=m.end() ;it++){
	        if(mx < it->second){
	            mx = it->second ;
	            val = it->first ;
	        }
	    }
	    if(mx > n/2){
	        return val;
	    }
	    else{
	        return -1;
	    }
	    
	    ********************************************************************************
        
        int maxCount = 0;
        int index = -1; // sentinels
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j])
                    count++;
            }
     
            // update maxCount if count of
            // current element is greater
            if (count > maxCount) {
                maxCount = count;
                index = i;
            }
        }
     
        // if maxCount is greater than n/2
        // return the corresponding element
        if (maxCount > n / 2)
            return arr[index];
        else
        {
            // cout<<"-1";
            return -1;
        }
            
    }
};
