Problem: SMOL Contest: LTIME93C 

#include<bits/stdc++.h>
#define pb push_back()
#define int long long 

using namespace std;

signed main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,k,ans;
        cin>>n>>k;
        
        if(k==0)
            std::cout << n << std::endl;
            
        else
         std::cout << n%k << std::endl;
    }
    return 0;
}

OR

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
	cin>>t;
    
    while(t--)
    {
       long long int a,b;
    	cin>>a>>b;
    	if(a>=b&&b!=0)
    	{
			a=a%b;
		}
		cout<<a<<endl;  	
    }
   
    return 0;
}
