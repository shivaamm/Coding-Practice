#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    double vel=pow((u*u)-2*a*s,0.5);
	    if(vel>v)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
