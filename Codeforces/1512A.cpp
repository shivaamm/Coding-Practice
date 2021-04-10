#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            b[i]=arr[i];
        }
        sort(arr,arr+n);
        // for (int i = 0; i < n; ++i)
        // cout << arr[i] << " ";
        // cout<<endl;
        int res,rem;
        if(arr[0]==arr[1])
            res=arr[n-1];
        else
            res=arr[0];
            
        for(int i=0;i<n;i++)
        {
            if(b[i]==res)
                rem=i+1;
        }
        cout<<rem<<endl;
    }
	return 0;
}
