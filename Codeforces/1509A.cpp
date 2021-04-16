#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,evncnt=0,oddcnt=0;
	    cin>>n;
	    int a[n],b[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	            b[evncnt++]=a[i];
            else
                c[oddcnt++]=a[i];
	    }
	    for(int i=0;i<oddcnt;i++)
	    {
	        cout<<c[i]<<" ";
	    }
	    for(int i=0;i<evncnt;i++)
	    {
	        cout<<b[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}
