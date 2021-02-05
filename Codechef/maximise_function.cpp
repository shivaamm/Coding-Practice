https://www.codechef.com/FEB21C/problems/MAXFUN

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        long long arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + a);
    
        long long res;
        // res=arr[a-1]-arr[0];
        // cout<<2*res<<endl;
        res = abs(arr[0]-arr[1]) + abs(arr[1]-arr[a-1]) + abs(arr[a-1]-arr[0]);
        cout<<res<<endl;
    }
    
 
    return 0;
}
