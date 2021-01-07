https://www.codechef.com/JAN21C/problems/DECODEIT
Problem Code: DECODEIT

Solution - 
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include <cmath>

using namespace std;

int convert(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int t,n;
    cin>>t;
    char ans;
    while(t--)
    {
        string s,x;
        int output;
    
        cin>>n;
        cin>>s;
        
        for(int i=0;i<n;i+=4)
        {
            x=s.substr(i,4);
            
            stringstream geek(x);
            
            int y=0;
            geek >> y;
            
            output = convert(y);
            
            ans = 'a' + output;
        cout<<ans;

        }
        cout<<endl;

    }
    return 0;
}
