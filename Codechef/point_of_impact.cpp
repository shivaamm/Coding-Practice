Contest Code:JAN21C Problem Code:BILLRD

https://www.codechef.com/JAN21C/submit/BILLRD

Solution-

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,x,y,des,cor,x1,y1,cor1,key;
        int arr[4],brr[4];
        cin>>n>>k>>x>>y;
        
        x1=x;
        y1=y;
        
        // des=n/2;
        if(x<y)
        {
            cor = n-y;
            x=x+cor;
            y=y+cor;
        }
        else
        {
            cor = n-x;
            x=x+cor;
            y=y+cor;
        }
        arr[0]=x;
        brr[0]=y;
        // cout<<"1st  "<<x<<" "<<y<<endl;
        swap(x,y);
        arr[1]=x;
        brr[1]=y;
        // cout<<"2nd  "<<x<<" "<<y<<endl;
        
        if(x1<y1)
        {
            // cor1 = n-y;
            cor1 = x-y;
            x=0;
            y=cor1;
        }
        else
        {
            // cor1 = n-x;
            cor1 = y-x;
            x=cor1;
            y=0;
        }
        swap(x,y);
        arr[2]=x;
        brr[2]=y;
        // cout<<"3rd  "<<x<<" "<<y<<endl;
        swap(x,y);
        arr[3]=x;
        brr[3]=y;
        // cout<<"4th  "<<x<<" "<<y<<endl
        
        if(x1==y1)
        {
            cout<<n<<" "<<n<<endl;
        }
        else{
            key=(k-1)%4;
            cout<<arr[key]<<" "<<brr[key]<<endl;
        
        }
        
        
    }
	return 0;
}


