https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        v.push_back(0);
        int sum=0,c=0;
        int n=gain.size();
        for(int i=0;i<n;i++)
        {
            sum+=gain[i];
            v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());
    }
};
