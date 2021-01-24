https://www.codechef.com/COOK126C/problems/PASSWD/

#include<bits/stdc++.h>
#define FOR(a,b,c) for(int(a) = b; a < c; a++)
 
using namespace std;
 
int main() {
 
  int t;
  cin >> t;
  while(t-->0)
  {
      int f1=0,f2=0,f3=0,f4=0;
      string s;
      cin >> s;
      int n=s.length();
      if(n<10)
      cout << "NO\n";
      else
      {
          FOR(i,0,n)
          {
              if(s[i] >= 97 && s[i] <= 122 && f1==0)
              f1=1;
              if(s[i] >= 65 && s[i] <= 90 && f2==0 && i > 0 && i < n-1)
              f2=1;
              if(s[i] >= 48 && s[i] <= 57 && f3==0 && i > 0 && i < n-1)
              f3=1;
              if((s[i]=='@' || s[i]== '#' || s[i]== '%' || s[i]=='&'|| s[i]== '?') && i > 0 && i < n-1 && f4==0)
              f4=1;
          }
          if(f1==1&&f2==1&&f3==1&&f4==1)
          cout << "YES\n";
          else
          cout << "NO\n";
      }
  }
  return 0;
}
