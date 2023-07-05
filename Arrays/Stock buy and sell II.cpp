
class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
                cnt = cnt + (prices[i+1]-prices[i]);
        }
        return cnt;
    }
};
