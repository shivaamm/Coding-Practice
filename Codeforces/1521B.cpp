#include <bits/stdc++.h>
#define ll long long int      // define to use for big integer values
using namespace std;

int main()
{
    // test cases
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        if(n==1){            // base case
            cout<<0<<endl;
            continue;
        }
        ll pop=1e9+7;        // modulo
        cout<<(n+1)/2<<endl;
        for(ll i=0;i<n;i+=2){
            if(i==n-1)
                continue;
                
                // find the min values
            cout<<i+1<<" "<<i+2<<" "<<pop<<" "<<min(a[i],a[i+1])<<endl;
            a[i+1]=min(a[i],a[i+1]);
        }    // if n%2 is equal to 1
        if(n%2==1)
            cout<<n-1<<" "<<n<<" "<<min(a[n-1],a[n-2])<<" "<<pop<<endl;
    }
    return 0;
}
