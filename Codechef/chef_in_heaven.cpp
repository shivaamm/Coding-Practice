#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

 int t;
  cin>>t;
 while(t--){
     string s;
     int count1=0, count2=0, i=0, a;
     bool flag = true;
     cin>>a>>s;
     while(true){
         if(i==a){
             break;
         }

         if(s[i]=='0'){
             count2++;
         }
         else{
             count1++;
         }
         if(count1>=count2){
             cout<<"YES"<<endl;
             flag = false;
             break;
         }
         i++;
     }
     if(flag){
         cout<<"NO"<<endl;
     }
 }
 

 return 0;
}
