class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int maxNo = INT_MIN;
        unordered_map<int, int> umap;
        for(int i=0;i<n;i++)
        {
            maxNo = max(maxNo, arr[i]);
            umap[arr[i]]++;
        }
        if(maxNo < 1)return 1;
        
        for(int i=1;i<=maxNo;i++)
        {
            if(umap.find(i)==umap.end())return i;
        }
        return maxNo+1;

    } 
};
