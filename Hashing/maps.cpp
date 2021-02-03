https://ideone.com/NNNAmp

    #include <iostream>
    #include <algorithm>
    #include <map>
    #include <cstdio>       // stdio.h or cstdio
     
    using namespace std;
     
    int main(){
     
        int t; cin>>t;
     
        while(t--){
            map<int, int> mp;
     
            int n, x; cin>>n;
            int mx = 0;
            for(int i=0;i<n;i++){
                cin>>x;
                mp[x]++;
     
                mx = max(mx, mp[x]);
            }
     
            for(auto bp : mp){
     
                if(bp.second == mx){
                    printf("%d %d\n", bp.first, bp.second);
                    //cout<<bp.first<<" "<<bp.second<<"\n";
                }
     
            }
     
        }
     
        return 0;
    }
    
    
stdin

1
10
1 3 1 4 1 5 7 7 7 8

stdout

1 3
7 3
