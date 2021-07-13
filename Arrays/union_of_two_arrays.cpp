class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       set<int> res;
        
        for(int i=0; i<n; i++){
            res.insert(a[i]);
        }
        
        for(int i=0; i<m; i++){
            res.insert(b[i]);
        }
        
        return res.size();
    }
};



Input:
6 2 
85 25 1 32 54 6
85 2 

Output: 
7

Explanation: 
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.
