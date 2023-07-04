class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans=0;
        
        for(int i=0;i<n;i++){
            long long val=1;
            for(int j=i;j<n;j++){
                val*=a[j];
                if(val<k)
                  ans++;
                else
                 break;
            }
        }
        
        return ans;
    }
};
