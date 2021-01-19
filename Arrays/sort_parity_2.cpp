https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n = A.size();
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++){
            if(A[i] & 1)
                odd.push_back(A[i]);
            else
                even.push_back(A[i]);
        }
        int j=0,k=0;
        for(int i=0; i<n; i++){
            if(i%2!=0)
                A[i] = odd[j++];
            else 
                A[i] = even[k++];
        }
        return A;
    }
};
