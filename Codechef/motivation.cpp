#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    int max=0;
	    cin>>n>>x;
	    for(int i=0;i<n;i++)
	    {
	        int s[n],r[n];
	        cin>>s[i]>>r[i];
	        
	        if(s[i]<=x)
	           {
	               if(max<r[i])
	                 max=r[i];
	           }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
