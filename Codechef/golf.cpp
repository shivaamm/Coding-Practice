#include <iostream>
using namespace std;
#define long long int

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        
        if(x%k==0 || (n-x+1)%k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
