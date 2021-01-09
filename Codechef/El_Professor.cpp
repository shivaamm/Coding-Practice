https://www.codechef.com/CMR12121/problems/ELPF/

#include <iostream>
using namespace std;

double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
 
    return (double)sum / (double)n;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int arr[n],a,b,k,me;
	    for(int c=0;c<n;c++)
	    {
	        arr[c]=10;
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>a>>b>>k;
	    
	    for(int j=a-1;j<b;j++)
	    {
	        arr[j]*=k;
	    }
	    }
	    me=findMean(arr,n);
	    cout<<me;
	}
	return 0;
}
