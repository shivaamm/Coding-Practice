#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        double w,h,res=0;
        cin>>w>>h;
        if(w>=h)
            res=w/h;
        else
            res=h/w;
        if(res>=1.6&&res<=1.7)
         {
            //  cout<<res<<endl;
             c++;
         }  
        
    }
    cout<<c;
    return 0;
}
