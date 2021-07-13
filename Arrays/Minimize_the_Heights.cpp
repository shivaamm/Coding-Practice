class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int minele, maxele;
        int res = arr[n-1]-arr[0];
        for(int i=1;i<=n-1;i++){
            if(arr[i]>=k){
                minele = min(arr[0]+k,arr[i]-k);
                maxele = max(arr[i-1]+k,arr[n-1]-k);
                res = min(res,maxele-minele);
            }
            else{
                continue;
            }
        }
        return res;
    }
};
