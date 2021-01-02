Question- https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/i-hate-even-subarrays/


#include<iostream>

#include<string>

using namespace std;

int top;

int main(){

 

int i,n,t,j;

cin>>t;

for(j=0;j<t;++j)

{

top=-1;

string str;

cin>>str;

n=str.size();

char stack[10000];

for(i=0;i<n;++i)

{
	if(top==-1)

	{

		top+=1;

		stack[top]=str[i];

	}

	else

	{
		if(stack[top]==str[i])

		{

			top-=1;

		}

		else

		{

			top+=1;

			stack[top]=str[i];

		}
	}
}

if(top==-1)

cout<<"KHALI";

else

{

	for(i=0;i<=top;++i)

		cout<<stack[i];

}

	cout<<endl;

	}
}
