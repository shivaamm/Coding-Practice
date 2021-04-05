#include <iostream>
#define remainder as rem
#define result as res
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    if(n==1)
	        cout<<"20"<<endl;
        else if(n==2)
            cout<<"36"<<endl;
        else if(n==3)
            cout<<"51"<<endl;
        else{
            long res = 0;
            int rem = n%4;  // find the remainder to find the no of blocks on top stack
            res = n*11;    // (5+6)=11 in dice when two sides are visible (max)
            if(rem == 1)
                res += 21;
            else if(rem == 2 || rem == 3)
                res += 22;
            else 
                res += 16;
            cout<<res;
        }
        cout<<endl;
        
        
	}
	return 0;
}
