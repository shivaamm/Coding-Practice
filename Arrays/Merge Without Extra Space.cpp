class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=n-1,j=0;
            while(i>=0 and j<m)
            {
                if(arr2[j]<=arr1[i])
                 {
                    swap(arr2[j],arr1[i]);
                    i--;
                    j++;
                 }
                 else break;
            }
            sort(arr2,arr2+m);
            sort(arr1,arr1+n);
        } 
};
