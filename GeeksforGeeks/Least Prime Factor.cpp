// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> result(n + 1);

        for(int i = 0; i < n + 1; i++)
            result[i] = i;

        for(int i = 2; i * i < n + 1; i++){
            if(result[i] == i){
                for(int j = i + i; j < n + 1; j += i)
                    result[j] = min(result[j], i);
            }
        }

        return result;
    }
};
