class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        unordered_set<int>s;
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        int res=0;
        for(int i=0;i<m;i++)
        {
            if(s.find(b[i])!=s.end())
             {
                 res++;
                 s.erase(b[i]);
             }
        }
        return res;
    }
};


Example 1:

Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.
Example 2:

Input:
n = 6, m = 5
a[] = {1, 2, 3, 4, 5, 6}
b[] = {3, 4, 5, 6, 7} 

Output: 4

Explanation: 
3 4 5 and 6 are the elements 
in the intersection of two arrays.
