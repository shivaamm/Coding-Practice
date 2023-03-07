class Solution {
public:
    long long func(vector<int>&time, long long k)
    {
        long long ans=0;
        for(int i=0;i<time.size();i++)
        {
            ans+= k/time[i];
        }
        return ans;
    }
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        long long s=1,e,ans=LONG_MAX;
        for(int i=0;i<time.size();i++)
        {
            e+=time[i];
        }
        while(s<=e)
        {
            long long mid = s + (e-s)/2;
            long long x = func(time,mid);
            if(x>=totalTrips)
            {
                ans = min(ans,mid);
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return ans;
    }
};
