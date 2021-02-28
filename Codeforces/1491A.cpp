#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	    int n,q,one=0,zero=0;
	    cin>>n>>q;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	            zero++;
	        else
	            one++;
	    }
	   // int s=sizeof(a)/sizeof(a[0]);
	    int m,p;
	    
	   // sort(a,a+n,greater<int>());
	   // for(int i=0;i<n;i++)
	   // {
	   //     cout<<a[i]<<" ";
	   // }
	   for(int i=0;i<q;i++)
	   {
	       cin>>m>>p;
    	   if(m==1)
    	   {
    	       if(a[p-1]==1)
    	         {
    	             one--;
    	             zero++;
    	         }
    	         else{
    	             one++;
    	             zero--;
    	         }
    	       int temp=1-a[p-1];
    	       a[p-1]=temp;
    	   }
    	   //cout<<a[p];
    	   else{
    	       if(p<=one)
    	       {
    	           cout<<1<<endl;
    	       }
    	       else{
    	           cout<<0<<endl;
    	       }
    	   }
	   }
	return 0;
}
