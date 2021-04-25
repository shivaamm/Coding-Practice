#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,m,x,y,a,b;
	    cin>>n>>m>>x>>y>>a>>b;
	    
	   // int np=n+m-x-y;
	   long long np=max(n-a,m-b);
	    long long mp=n-x+m-y;
	    
	   // cout<<np<<" "<<mp<<endl;
	    if(mp<=np)
	        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
