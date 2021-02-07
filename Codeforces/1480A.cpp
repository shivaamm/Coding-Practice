#include <iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    string s;
	    cin>>s;
	    
	    int l=s.length();
	    for(int i=0;i<l;i++)
	    {
	        if(i%2==0)
	        {
	            if(s[i]=='a')
	                s[i]+=1;
	            else
	                s[i]='a';
	        }
	        else
	        {
	            if(s[i]=='z')
	                s[i]=s[i]-1;
	            else
	                s[i]='z';
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
