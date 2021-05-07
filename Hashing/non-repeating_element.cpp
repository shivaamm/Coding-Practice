class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        map<int,int>v;
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        // int ans=0;
        for(int i=0;i<n;i++)
	   {
	       if(v[arr[i]]==1)
	       {
                return arr[i];
                break;
             }
        }
        return 0;
    } 
  
};
