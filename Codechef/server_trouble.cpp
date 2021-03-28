#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int t = 1;
  cin>>t;
  for(int i = 0; i < t; i++){
        int n,k; 
        cin>>n>>k;
        int q = (n-1)/k;
        int r = (n-k)%k;

        if(r==0)
            r = k;
        cout<<q+1<<' '<<r<<endl;
  }
  return 0;
}
