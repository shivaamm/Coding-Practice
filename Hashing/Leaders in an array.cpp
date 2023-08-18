class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int localmax = INT_MIN;
        for(int i = n - 1; i >= 0; i--){
            localmax = max(localmax, a[i]);
            if(localmax <= a[i]){
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};
