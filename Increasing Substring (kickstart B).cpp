#include<iostream>
using namespace std;

void run_test()
{
     int n;
        cin>>n;
    string s;
        cin>>s;
       
        int count=1;
        for(int i=0;i<n;i++)
        {
            // int b=s[i+1];
            // int a=s[i];
            // cout<<int(a)<<" "<<int(b)<<endl;
            if(int(s[i+1])>int(s[i]))
            {
                cout<<count<<" ";
                count++;
                // if(int(b)==int(a))
                //     {
                //         cout<<count<<endl;
                //         count=1;
                //     }
                
            }
            // if(s[i+1]>s[i])
            // {
            //     cout<<count<<endl;
            //     count++;
            // }
            else{
                cout<<count<<" ";
                count=1;
                
            }
                
        }
        cout<<endl;
}
int main()
{
    int t;
    cin>>t;
     int i=0;
    while(t--)
    {
       
       
        cout<<"Case #"<<i+1<<":"<<" ";
        i++;
        run_test();
    }
    return 0;
}
