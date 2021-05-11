class Solution
{
    public:
    int peakElement(int a[], int n)
    {
         if(a[0]>a[1])
                return 0;
            if(a[n-1]>a[n-2])
                return (n-1);
            for(int i=1;i<=n-2;i++)
            {   if(a[i]>a[i-1] && a[i]>a[i+1])
                    return i;
            }
            
            
            // ********************** Using binary Search ********************** //
        
        // int l=0,h=n-1;
        //   int mid;
        //   while(l<=h)
        //   {
        //       mid=l+(h-l)/2;
        //       if((mid==0||a[mid]>=a[mid-1])&&(mid==n-1||a[mid]>=a[mid+1]))
        //         return mid;
        //       else if(mid>0&&a[mid-1]>a[mid])
        //       h=mid-1;
        //       else
        //       l=mid+1;
              
        //   }
        //   return -1;
    }
};
