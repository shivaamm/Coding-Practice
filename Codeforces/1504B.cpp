#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int n; string a, b; cin>>n>>a>>b;
        int prefix[n+1] = {};
            //checking all operations  
        for(int i = 0; i < n; i++){
            if(a[i] == '1')prefix[i+1] = prefix[i]+1;
            else prefix[i+1] = prefix[i] - 1;
        }

        bool code = true;
        bool flips = false;
        //bits operation
        for(int i = n-1; i >= 0; i--){
            if((!flips && a[i] == b[i]) || (flips && a[i] != b[i]))
                continue;
            else if(prefix[i+1] == 0){
                flips = !flips;
            }
            else {code = false;break;}
        }
        // printing output
        cout<<(code?"YES":"NO")<<endl;
    }
    return 0;
}
