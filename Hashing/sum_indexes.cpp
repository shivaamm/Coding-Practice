class Solution{
public:
    int pairCount(int n, int a[], int b[], int c[])
    {
        map<int,int>map;
         for(int i=0;i<n;i++)
           {
               map[c[i]]++;
           }
           int count=0;
           for(int i=0;i<n;i++)
           {
               if(map.find(a[i]-b[i])!=map.end())
               count++;
           }
           return count;
    }
};
