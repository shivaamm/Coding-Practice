#include<iostream>
using namespace std;

bool prime(int n)
{
    int i, flag = 0,pr=0;

          for (i = 2; i <= n / 2; ++i) {
            // condition for non-prime
            if (n % i == 0) {
              flag = 1;
              break;
            }
          }
        
          if (n == 1) {
              pr=0;
            // printf("1 is neither prime nor composite.");
          } 
          else {
            if (flag == 0)
            {
                pr=1;
            //   printf("%d is a prime number.", n);
            }
            else{
                pr=0;
            //   printf("%d is not a prime number.", n);
            }
          }
          if(pr==1)
            return true;
          else
            return false;
}
int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;
 
    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}

void run_test()
{
     long long int q;
     cin>>q;
     long long int n=floorSqrt(q);
     long long int n2=n+1;
     
     bool p=prime(n);
     while(n!=0 & p==false)
     {
         n--;
         p=prime(n);
     }
      bool pp=prime(n2);
     while(n2!=0 & pp==false)
     {
         n2++;
         pp=prime(n2);
     }
    //  cout<<n<<" "<<n2;
       
    if(n*n2>q)
    {
        n2=n;
        n--;
        while(prime(n)==false)
            n--;
    }
    cout<<n*n2<<endl;
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
