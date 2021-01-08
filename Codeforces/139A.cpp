#include<iostream>
#include <cstdio>
using namespace std;
int main (void)
{
	int sum=0,n,i,week[7];
	cin>>n;
	for( i=0;i<7;i++) cin>>week[i];
	for(i=0;sum<n;i++) sum+=week[i%7];		
	if(i%7==0) 
		cout<<"7"<<endl;
	else 
		cout<<(i)%7<<endl;
	return 0;
}
