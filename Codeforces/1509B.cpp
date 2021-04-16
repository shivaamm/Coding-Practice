#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
	int m=0,t=0;
	for(auto x:str)
	{
		if(x=='M')
			m++;
		else
				t++;
		if(m>t)
			return false;
	}
	return 2*m==t;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    if(check(str))
	        {
	            reverse(str.begin(),str.end());
    			if(check(str))
    				cout<<"YES\n";
    			else
    				cout<<"NO\n";
	        }
        else
        {
            cout<<"NO"<<endl;
        }
	    
	}
	
	return 0;
}
