#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)          //test case
   {
       int n,k,j=0;   // initialize j=0
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];  ///taking array inputs
       }
       for(int i=0;i<k;i++)
       {
           while(a[j]==0)         // check for values that are zeros
              {
                  j++;
              }
              if(j>(n-1))
              {
                  break;
              }
              a[j]--;                 // we decrement the values by 1
              a[n-1]++;                 // we increment the value by 1
       }
       for(int i=0;i<n;i++)
       {                    //printing the array
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }

    return 0;
}
