#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;

        int count=0,sum=0;
        for(int i = l; i<=r; i++){

            int x = i;

            sum = 0;

            while(x>0){

                sum+=x%16;

                x = x/16;

            }

            if(__gcd(i,sum)>1)count++;

        }

        cout<<count<<endl;


    }
    return 0;
}
