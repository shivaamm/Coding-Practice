#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)          //test case
   {
       long long int n,sum=0,res;
       cin>>n;
       res=n/2050;
        if(n%2050!=0)
            cout<<"-1"<<endl;  // for value less than 2050
        else
        {
            while(res)
            {
                sum+=res%10;
                res=res/10;
            }
            cout<<sum<<endl;    // storing the sum of all quotients
        }
        
   }

    return 0;
}
