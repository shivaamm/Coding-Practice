#include <iostream>
#include<math.h>
using namespace std;

long long int mod = 1000000007;
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	   // long long m=(pow(2,n)-1);
	   // long long count=0;
	   //for(long long x=0;x<m;x++)
	   //{
	   //    if((x^(x+1))==((x+2)^(x+3)))
	   //         count++;
	   //}
	   //cout<<count<<endl;
	   
	    long long int a=2,b=n-1;
	    long long int ans = 1;
        while (b > 0)
        {
            if (b & 1)
                ans = (ans * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        cout<<ans<<endl;
	}
	return 0;
}
