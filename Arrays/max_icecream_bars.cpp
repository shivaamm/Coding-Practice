class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0,sum=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++)
        {
            if(sum<coins)
            {
                sum+=costs[i];
                count++;
            }
        }
        if(costs[0]>coins)
            return 0;
        else if(sum>coins)
            return count-1;
        else
            return count;
        
        
        // sort(begin(costs), end(costs));
        // for (int i = 0; i < costs.size(); ++i)
        //     if (coins >= costs[i])
        //         coins -= costs[i];
        //     else
        //         return i;
        // return costs.size();
    }
};
