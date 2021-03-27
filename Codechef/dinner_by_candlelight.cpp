#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t-- !=0){
        ll a,y,x;
        cin>>a>>y>>x;
        ll max=0;
        if(a<y){
            max=(1+(a*x));
        }
        else{
            max=(x*(y));
        }
        cout<<max<<endl;
    }
}
