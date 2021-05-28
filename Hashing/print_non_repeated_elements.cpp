class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++)
            umap[arr[i]]++;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(umap[arr[i]]==1)
                ans.push_back(arr[i]);
        }
        
        return ans;
    }
};


Input:
n = 10
arr[] = {1,1,2,2,3,3,4,5,6,7}
Output: 4 5 6 7
Explanation: 4, 5, 6 and 7 are the only 
elements which is having only 1 
frequency and hence, Non-repeating.
