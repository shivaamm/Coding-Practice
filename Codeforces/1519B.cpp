#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,b,d;
        cin>>r>>b>>d;
        
        if((r*b)-1==d)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
	return 0;
}
