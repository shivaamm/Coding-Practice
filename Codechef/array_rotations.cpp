#include <bits/stdc++.h>
#define ll long long
const ll mod=1e9+7;   // mod for both sides
using namespace std;
int main()
{
    ll n,q;  // test cases
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
        sum=(sum+mod)%mod;    // find sum by tang mod
    }
    sum%=mod;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll x;
        cin>>x;
        sum=(sum*2)%mod;           // again taking mod
        
        // finally prirnt the sum
        cout<<sum<<endl;
    }
    return 0;
}
