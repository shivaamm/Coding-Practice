class Solution{
public:
    // int toyCount(int N, int K, int arr[])
    //     {
    //         // code here
    //         sort(arr,arr+N);
    //         int rem =0;
    //         int count=0;
    //         int i=0;
    //         for(int i=0;i<N;i++){
    //             rem+=arr[i];
    //             if(rem>K)
    //             return count;
    //             else
    //             count++;
    //         }
    //         return count;
    //     }
    int toyCount(int N, int K, vector<int> arr)
    {
        long long count=0;
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]<=K)
                {
                    K-=arr[i];
                    count++;
                }
                else{
                    break;
                }
        }
        return count;
    }
};
