class Solution{
    public:
    // arr1[] : the input array-1
    // N : size of the array arr1[]
    // arr2[] : the input array-2
    // M : size of the array arr2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> arr1, int N, vector<int> arr2, int M) 
    {
       map<int,int> m;
        int n = arr1.size(),p=arr2.size();
        for(int i=0;i<n;i++)
            m[arr1[i]]++;
    
        vector<int> ans;
        for(int i=0;i<p;i++)
        {
            while(m[arr2[i]]>0)
            {
                ans.push_back(arr2[i]);
                m[arr2[i]]--;
            }
        }
        
        for(auto i:m){
            while(i.second>0){
                ans.push_back(i.first);
                i.second--;
            }
        }
        
        return ans;
    } 
};
