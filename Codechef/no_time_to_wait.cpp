#include <iostream>
using namespace std;

int main() {
	int n,h,x;
	cin>>n>>h>>x;
	int t[n];
	for(int i=0;i<n;i++)
	{
	    cin>>t[i];
	}
	int max = t[0];
 
    for (int i = 1; i < n; i++)
        if (t[i] > max)
            max = t[i];
            
    if(x+max>=h)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
