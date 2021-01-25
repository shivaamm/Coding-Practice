#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<endl;
	 }
	 
	return 0;
}
