class Solution {
public:
    long long maxRunTime(int n, vector<int>& b) {
        long long low =1;
        long long high = accumulate(begin(b),end(b),0LL)/n;

        while(low < high){
            long long mid = (high+low+1)/2;
            long long time=0;
            for(int t : b) time += min((long long)t,mid);

            if(mid*n <= time) low = mid;
            else high = mid-1;
        }
        return low;
    }
};
