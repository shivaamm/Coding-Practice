#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        
        int res= x + floor(y/2);
        // cout<<res<<endl;
        int rem = res * h;
        //  cout<<rem<<endl;
        if(rem<=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
