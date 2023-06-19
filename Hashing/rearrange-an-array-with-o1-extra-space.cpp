class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            int trans=arr[i];
            arr[i]=mp[trans];
        }
        
    }
};
