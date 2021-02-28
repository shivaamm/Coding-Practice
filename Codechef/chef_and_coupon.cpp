
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,c,ar=0,br=0,sumc=0,sumd=0;
	    cin>>d>>c;
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    ar=a1+a2+a3;
	    br=b1+b2+b3;
	    
	    if(ar >= 150 && br >= 150)
	    {
	        if(c>=2*d){
	            cout<<"NO"<<endl;
	        }
	        else{
	        cout<<"YES"<<endl;
	        }
	    }
	    else if(ar < 150 && br < 150)
	    {
	        cout<<"NO"<<endl;
	    }
	    else{
	        sumc=ar+br+c+d;
	        sumd=ar+br+d+d;
	       //  if(sumc>=sumd)
	       // {
	       //     cout<<"NO"<<endl;
	       // }
	       // else
	       // {
	       //     cout<<"YES"<<endl;
	       // }
	        if(sumc>=sumd)
	        {
	            cout<<"NO"<<endl;
	        }
	        else
	        {
	            if(c>=2*d){
	            cout<<"NO"<<endl;
    	        }
    	        else{
    	            cout<<"YES"<<endl;
    	        }
	        }
	    }
	    
	}
	return 0;
}
