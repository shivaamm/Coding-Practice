#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int t; cin>>t;
//   scanf("%d",&t);
  while(t--){
        int n, m; 
        // scanf("%d,%d",&n,&m);
        cin>>n>>m;
        set<int> s;
        for(int i = 0; i < n; i++){
            int a; 
            cin>>a;
            // scanf("%d",&a);
            s.insert(a);
        }
        if(s.size() < m)
            // printf("YES\n");
            cout<<"YES"<<endl;
        else 
            // printf("NO\n");
            cout<<"NO"<<endl;
  }
  return 0;
}
