#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;   //test cases
    cin>>t;
    while(t--)
    {
        // inside test cases
        long long n,w,r;   
         cin>>n>>w>>r;
         w-=r;
         //vector for array
         vector<long long>arr(n);
         for(auto &x:arr){
          cin>>x;
         }
         sort(arr.begin(),arr.end());    // sort
         for(int i=0;i<n-1;i++){
          if(arr[i]==arr[i+1]){w-=(arr[i]+arr[i+1]); i++;}
         }
         if(w>0){
          cout<<"NO"<<endl;
         }
         else{
          cout<<"YES"<<endl;
         }
    }
	return 0;
}
