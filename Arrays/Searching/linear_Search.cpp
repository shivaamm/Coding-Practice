#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.length();
        int m=s2.length();
        int j = 0;
        for(int i=0;i<m;i++)
        {
            if(s1[j]==s2[i])
                j++;

        }
        if(j==n)
            cout<<"Love you too"<<endl;
        else
            cout<<"We are only friends"<<endl;
    }
    return 0;
}
