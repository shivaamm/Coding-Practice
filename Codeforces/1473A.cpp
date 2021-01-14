https://codeforces.com/contest/1473/problem/A

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m = sizeof(a) / sizeof(a[0]);
        sort(a,a+m);
        // for(int i=0;i<n;i++)
        // {
        //     int c=0;
        //     if(a[i]<d)
        //     {
        //         continue;
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         a[n-1]=a[0]+a[1];
        //         cout<<a[n-1];
        //     }
        // }
        
        if(a[n-1]>d)
        {
            if(a[0]+a[1]<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}



