#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n;
	    cin>>x>>n;
	    int a[x];
	    int count=0;
	    for(int i=0;i<x;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+x);
	    for(int i=0;i<x;i++)
	    {
	        if(a[i]!=a[i+1])
	            count++;
	    }
	   // cout<<count<<endl;
	   if(count<=(x-n))
	       cout<<count<<endl;
       else
            cout<<(x-n)<<endl;
	    
	}
	return 0;
}
