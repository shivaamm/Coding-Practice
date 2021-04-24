class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int,int> hash;
        vector<int> vec;
        int ans = 0, s = 0;
        for(int i:arr) hash[i]++;
        for(auto [a,b]:hash) vec.push_back(b);
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<vec.size() && s*2<arr.size(); ++i) ans++, s += vec[i];
        return ans;
        
        
        // unordered_map<int, int> mp;
        // for (int &n : arr) {
        //     mp[n]++;
        // }
        // int half = arr.size() / 2;
        // vector<int> counts;
        // for (auto it : mp) {
        //     counts.push_back(it.second);
        // }
        // if (counts.size() == 1) {
        //     return 1;
        // }
        // sort(begin(counts), end(counts));
        // int result = 0;
        // long long int sum = 0;
        // for (int i = counts.size() - 1; i >= 0; i--) {   //greedily choose the highest frequency till count reaches greater than or equal to half the size of the initial array.
        //     if (sum < half) {
        //         sum += counts[i];
        //         result++;
        //     }
        // }
        // return result;
    }
};
