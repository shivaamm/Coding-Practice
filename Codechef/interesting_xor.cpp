#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int c;
	    cin>>c;
	    long int x = c;
	    int ones=0;
	    int size=0;
	    
	    while(x>0)
	    {
	        if(x%2==1)
	        {
	            ones++;
	        }
	        x=x/2;
	        size++;
	    }
	    
	    int a[size],b[size];
	    int v=size;
	    x=c;
	    int ind=0;
	    
	    while(x>0)
	    {
	        if(x%2==0)
	        {
	            a[ind]=1;
	            b[ind]=1;
	        }
	        else
	        {
	            if(ones==1)
	            {
	                a[ind]=1;
	                b[ind]=0;
	            }
	            else
	            {
	                a[ind]=0;
	                b[ind]=1;
	            }
	            ones--;
	        }
	        
	        ind++;
	        x=x/2;
	    }
	    
	    long int av =0, bv=0;
	    long int p=1;
	    
	    for(int i=0;i<v;i++)
	    {
	        av=av+p*a[i];
	        bv=bv+p*b[i];
	        
	        p=p*2;
	    }
	    cout<<av*1ll*bv<<endl;
	}
	return 0;
}
