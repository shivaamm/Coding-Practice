class Solution {
  public:
    int assignMiceHoles(int n , int a[] , int b[]) {
        sort(a,a+n);
	    sort(b,b+n);
	    int m=INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(abs(b[j]-a[j])>m)
            m=abs(b[j]-a[j]);
        }
        return m;
    }
};
