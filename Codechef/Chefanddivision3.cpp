Contest Code:JAN21C Problem Code:DIVTHREE

https://www.codechef.com/JAN21C/submit/DIVTHREE

Solution-

#include <iostream>
using namespace std;

int main() {
    int t,n,k,d,i,a,suma=0,output;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        for(i=0;i<n;i++)
        {
            cin>>a;
            suma+=a;
        }
        
        output=suma/k;
        // cout<<output<<endl;
        
        if(output<=d)
        {
            cout<<output<<endl;
        }
        else{
            cout<<d<<endl;
        }
        suma=0;
    }
	return 0;
}
