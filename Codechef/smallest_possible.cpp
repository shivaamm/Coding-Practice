Problem: SMOL Contest: LTIME93C 

#include<bits/stdc++.h>
#define pb push_back()
#define int long long 

using namespace std;

signed main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,k,ans;
        cin>>n>>k;
        
        if(k==0)
            std::cout << n << std::endl;
            
        else
         std::cout << n%k << std::endl;
    }
    return 0;
}
