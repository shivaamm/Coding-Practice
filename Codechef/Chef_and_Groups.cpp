#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int si=s.size();
	    int c1=0,c2=0;
	    for(int i=0;i<si;i++)
	    {
	        if(s[i]=='0')
	        {
	            continue;
	        }
	        else
	        {
	           if(s[i]=='1' && s[i+1]=='1')
	           {
	               c1++;
	           }
	           if(s[i]=='1' || s[i+1]=='1')
	           {
	               c2++;
	           }
	        }
	    }
	    cout<<c2-c1<<endl;
	}
	return 0;
}
