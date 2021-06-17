class Solution{
public:	

    void swap(int &a,int &b)
    {
        int t=a;
        a=b;
        b=t;
    }
    
	// Program for zig-zag conversion of array
	
	void zigZag(int a[], int n) {
	    for(int i=1;i<n;i+=2)
	    {
	        if(a[i-1]>a[i])
	        {
	            swap(a[i-1],a[i]);
	        }
	        if(i+1<n)
	        if(a[i]<a[i+1]) swap(a[i],a[i+1]);
	    }
	}
};
