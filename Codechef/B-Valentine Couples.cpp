#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,aa,bb;
	    cin>>n;
	    int a[n],b[n],res[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(b,b+n,greater<int>());
	 
	    for(int i=0;i<n;i++)
	    {
	        res[i]=a[i]+b[i];
	    }
	    int m=res[0];
	    for(int i=0;i<n;i++)
	    {
	        
	        if(m<res[i])
	            m=res[i];
	    }
	    cout<<m<<endl;
	    
	    
	    
	}
	return 0;
}
