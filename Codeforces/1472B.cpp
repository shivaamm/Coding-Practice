Contest: Codeforces Round #693 (Div. 3), problem: (B) Fair Division

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if ((c1 + 2 * c2) % 2 != 0) {
            cout << "NO\n";
          } else {
            int sum = (c1 + 2 * c2) / 2;
            if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0)) {
              cout << "YES\n";
            } else {
              cout << "NO\n";
            }        
          }
    }
    return 0;
}
