#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        
        if(n==1)
            cout<<"NO"<<endl;
        else
            {
                cout<<"YES"<<endl;
                cout<<m<<" "<<m*n<<" "<<m*(n+1)<<endl;
            }
    }
    return 0;
}
