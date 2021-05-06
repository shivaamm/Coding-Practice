class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        // unordered_map<int,int>s;                // using maps
        // int res=n;
        // for(int i=0;i<n;i++)
        // {
        //     if(s.find(arr[i])==s.end())
        //         s.insert({arr[i],i});
        //     else
        //     {
        //         res=min(res,s[arr[i]]);
        //     }
        // }
        // if(res==n)
        //     return -1;
        // else
        //     return res+1;
            
            
            ********************************************************
            
        
        unordered_set<int>set;                           // using sets
           int min=-1;
           for(int i=n-1;i>=0;i--)
           {    if(set.find(arr[i])!=set.end())
                        min=i+1;
                else
                    set.insert(arr[i]);
           }
           return min;
    }
};
