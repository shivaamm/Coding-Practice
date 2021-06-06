int majorityElement(int a[], int size)
    {
        int n=size;
        
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
   }   
