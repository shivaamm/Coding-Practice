https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
      int count=0;
        for(int i=1;i<=n;i++)
        {
            n=n-i;
            // cout<<n<<endl;
            count=count+1;
        }
        return count; 
    }
};
