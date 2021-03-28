#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int t; 
  cin>>t;
  for(int k = 0; k < t; k++){
        int n, m; 
        cin>>n>>m;
        int foot[n+1] = {}, c[m];
        for(int i = 1; i <= n; i++)
            cin>>foot[i];
        for(int j = 0; j < m; j++)
            cin>>c[j];

        int res = 0, i = 0, j = 0, count = 0;
        while(i <= n && j < m){
            if(count){
                while(c[j] < foot[i])
                j++;
            }
            else{
                while(foot[i] < c[j])
                i++;
            }
            count = 1 - count;
            res++;
        }
        cout<<res<<endl;
  }
  return 0;
}
