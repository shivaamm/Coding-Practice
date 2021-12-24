class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=0,last=-1,n=seats.size();
         for(int i=0;i<n;i++)
         {
            if(seats[i]==1)
            {
                if(last<0)    //for starting zeroes...(0001101)
                    ans=i;
                else           //for middle zeroes...(10001)
                    ans=max(ans,(i-last)/2);
                
                last=i;
            }
        }
        ans=max(ans,n-last-1);    //check for last zeroes...(1000)
        
        return ans;
    }
};
