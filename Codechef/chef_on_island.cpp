#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;
	    
	    float a,b;
	    a=x/xr;
	    b=y/yr;
	    float m=min(a,b);
	    if(m<d) 
	        cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	}
	return 0;
}
