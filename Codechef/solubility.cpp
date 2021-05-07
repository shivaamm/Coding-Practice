#include <iostream>
using namespace std;
#define long long int

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int res=0;
	    res=b+(100-a)*c;
	    int ans=0;
	    ans=res*10;
	    cout<<ans<<endl;
	}
	return 0;
}
