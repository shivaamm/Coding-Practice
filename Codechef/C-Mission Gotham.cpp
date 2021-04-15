#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	int rem[n+1];
	for(int i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	int q;
	cin>>q;
	for(int i=1;i<=n;i++) 
	   {
	       rem[i] = i;
	   }
	while(q-->0)
	{
	    int x,k;
	    cin>>x>>k;
	    int i = rem[x];
          long ans = 0, v = i-x;
          for(;i<=n;i++) {
           if(a[i]>=k) {
            a[i] -= k;
            ans = ans + k*v;
            break;
           }
           else {
            k -= a[i];
            ans = ans + a[i]*v;
            v++;
            a[i] = 0;
           }
          }
          if(i!=n+1 && a[i]==0) i++;
          x = rem[x];
          while(x<=n&&a[x]==0) {
           rem[x++] = i;
          }
          
          cout<<ans<<endl;
	}
}
