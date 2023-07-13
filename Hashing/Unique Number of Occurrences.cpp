class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map <int,int> map;
        for(int i=0;i<n;i++) map[arr[i]]++;
        for(auto it:map){
            if(arr[it.second] == INT_MIN) return 0;
            arr[it.second] = INT_MIN;
        }
        return 1;
    }
};
