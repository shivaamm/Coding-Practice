class Solution {
  public:
    long long int nthOfSeries(long long int n){
       return (8 * n * n) + 1;
    }
};

The given series has a pattern which is visible after subtracting it from itself after one shift 

S = 9 + 33 + 73 + 129 + … tn-1 + tn
S =     9 + 33 + 73 + … tn-2 + tn-1 + tn
———————————————
0 = 9 + (24 + 40 + 56 + ….) - tn 

Since 24 + 40 + 56.. series in A.P with
common difference of 16, we get

 tn = 9 + [((n-1)/2)*(2*24 + (n-1-1)d)] 

On solving this we get 


 tn = 8n2 + 1
