class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long l1 = 0, l2 = 0;
        k--;
        int n = weights.size();
        vector<long long> res1;

        for (int i = 1; i < n; i++) {
            res1.push_back(weights[i] + weights[i - 1]);
        }

        sort(res1.begin(), res1.end(), greater<long long>());

        int n1 = res1.size();

        for (int i = 0; i < k; i++) {
            l2 += res1[i];
            l1 += res1[n1 - 1 - i];
        }

        return (l2 - l1);
    }
};
