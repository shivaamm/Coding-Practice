class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        unordered_map<int, int> hash;
	    int flag = 0;
	    for(int i = 0;i<n;i++)
	    {
	        if(hash.find(a[i]) == hash.end())
	            hash[a[i]] = 1;
	        else {
	            flag = 1;
	            break;
	        }     
	    }
	    if(flag == 0)
	        return "GIRLS";
        else
            return "BOYS";
        
        
        ***************************************  Instead of map we can also use set the same way  ******************************************************
        
        
        unordered_set<int>st;
	    int flag=0;
	    for(i=0;i<n;i++)
	    {
	        if(st.find(arr[i])==st.end())
	            st.insert(arr[i]);
	        else
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<"BOYS";
	   else
	        cout<<"GIRLS";
        
    }
};
