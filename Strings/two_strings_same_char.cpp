#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int r=0;
	    for(int i=0;i<s1.length();i++)
	    {
	        if(toupper(s1[i])==toupper(s2[i]))
	        r++;
	    }
	    cout<<r<<" ";
	    cout<<endl;
	}
	return 0;
}
