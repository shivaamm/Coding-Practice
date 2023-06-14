class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> pq;

        for(int i = 0; i < N; i++){
            pq.push(A[i]);
        }

        long long ans = 0;

        while(K-- and pq.size()){
            int cur = pq.top();
            pq.pop();

            ans += cur;

            if(cur > 1)
                pq.push(cur / 2);
        }

        return ans;
    }
};


// question link - https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1
