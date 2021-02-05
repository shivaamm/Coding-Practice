https://www.codechef.com/FEB21C/problems/HDIVISR

#include<iostream>
 
using namespace std;
 
int main()
{
 long int n,i,res;
 cin>>n;

 for(i=1;i<=10;++i)
 {
    if(n%i==0)
        res=i;
 }
 cout<<res;
 return 0;
}
