#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> sol;
        long long int i,count=0,flag=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='*')
            sol.push_back(1);
            else
            sol.push_back(0);
        }
        for(i=0;i<n;i++)
        {
            if(sol[i]==1)
            count++;
            else
            {
                if(count==k)
                flag=1;
                count=0;
            }
        }
        if(count==k)
        flag=1;
        
        if(flag==1)
        cout<<"Yes";
        else
        cout<<"No";
        cout<<endl;
    }
}

Example Input
3
5 2
*a*b*
5 2
*a**b
5 1
abcde
Example Output
NO
YES
NO
