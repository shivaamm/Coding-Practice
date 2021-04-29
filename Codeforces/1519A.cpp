#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,b,d;
        cin>>r>>b>>d;
        
        // int mini = min(r,b);
        // int maxi = max(r,b);
        
        if(d==0)
        {
            if(r==b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(((1+d)*min(r,b))>=max(r,b))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
	return 0;
}
