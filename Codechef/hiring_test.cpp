#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,x,y;
	    cin>>n>>m>>x>>y;
	    while(n--)
	    {
	        string s;
	        cin>>s;
	        int fcount=0,pcount=0;
	        for(int i=0;i<m;i++)
	        {
	            if(s[i]=='F')
	                fcount++;
                if(s[i]=='P')
                    pcount++;
	        }
	       // cout<<fcount<<" "<<pcount<<endl;
	        if(fcount>=x)
	            cout<<"1";
            else if(fcount==(x-1) && pcount>=y)
                cout<<"1";
            else
                cout<<"0";
	        
	    }
	    cout<<endl;
	}
	return 0;
}
