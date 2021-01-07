Contest Code:JAN21C Problem Code:FAIRELCT

https://www.codechef.com/JAN21C/submit/FAIRELCT

Solution - 

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t,suma=0,sumb=0;
	cin>>t;
	
	while(t--)
	{
	    int n,m,asc,des,count=0;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        suma+=a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	        sumb+=b[i];
	    }
	    
	    asc = sizeof(a) / sizeof(a[0]);     
	    sort(a, a + asc);    // another way to sort [ array.sort(arrayname)]
	    des = sizeof(b) / sizeof(b[0]);
	    sort(b, b + des);    //this is in ascending order to print it in des just reverse it
	    reverse(b,b+des);
	   
	    //for (int i = 0; i < asc; ++i)
        //     cout << a[i] << " ";
            
        //     cout<<endl;
            
        //     for (int i = 0; i < des; ++i)
        //     cout << b[i] << " ";
            
        //     cout<<endl;
        //      cout<<suma<<endl<<sumb<<endl;
        //     suma=0;
	       // sumb=0;
	        if(suma>sumb){
	            cout<<"0"<<endl;
	        }
	        else{
	            int j=0;
	            for(int i=0;i<n;i++)
	            {
	                if(j<des)
	                {
	                    suma=suma-a[i]+b[j];
	                    sumb=sumb-b[j]+a[i];
	                
	                    swap(a[i],b[j]);
	                    count++;
	                    j++;
	                    if(suma>sumb)
	                    break;
	                } 
	                
	            }
	            if(suma>sumb)
	            cout<<count<<endl;
	            else
	            cout<<"-1"<<endl;
	        }
	        count=0;
	        suma=0;
	        sumb=0;
	    }
	return 0;
}
