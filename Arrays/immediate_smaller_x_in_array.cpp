class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int a[], int n, int x)
    {
        int final=-1;
         for(int i=0;i<n;i++)
         {
             if(a[i]<x)
             {
                 if(a[i]>final)
                 {
                     final = a[i];
                 }
             }
         }
         return final;
    }
};
