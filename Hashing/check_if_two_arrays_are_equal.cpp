class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> arr, vector<ll> brr, int n) {
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(int i=0;i<n;i++)
        {
            m[brr[i]]--;
            if(m[brr[i]]==0)
            m.erase(brr[i]);
        }
        return m.size()==0;
        
        
        // sort(arr.begin(), arr.end());
        // sort(brr.begin(), brr.end());
        // bool ch = 1;
        // for(int i = 0; i < n; i++){
        //     if(arr[i] != brr[i]){
        //         ch = false;
        //         break;
        //     }
        // }
        // return ch;
    }
};
