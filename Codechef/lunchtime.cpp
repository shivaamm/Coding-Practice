#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cview(int arr[],int ind,int n){
    int count =0,i=ind-1;
    while(i>=0){
        if(arr[i]==arr[ind]){
            count++;
        }
        else if(arr[i]>arr[ind]){
            break;
        }
        i--;
    }
    i=ind+1;
    while(i<n){
        if(arr[i]==arr[ind]){
            count++;
        }
        else if(arr[i]>arr[ind]){
            break;
        }
        i++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N],ans[N];
        for(int i=0 ;i<N; i++){
            cin>>arr[i];
        }
        for(int i=0;i<N;i++){
            ans[i] = cview(arr,i,N);
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
