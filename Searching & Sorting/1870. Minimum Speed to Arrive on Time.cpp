class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        double sum = 0;
        int n = dist.size();
        int start = 1;
        int end = 1e7;
        if(hour<=(double)dist.size()-1)return -1;
        while(start<end){
            int mid = (start+end)>>1;
            for(int i = 0; i<n-1; i++){
                sum+=(double)dist[i]/mid;
                sum=ceil(sum);
            }
            sum+=(double)dist[n-1]/mid;
            if(sum<=hour)end=mid;
            else start=mid+1;
            sum=0;
        }
        return end;
    }
};
