https://www.tutorialspoint.com/cplusplus-program-to-find-gcd-of-two-numbers-using-recursive-euclid-algorithm

#include <iostream>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
   int a , b;
   cout<<"Enter the values of a and b: "<<endl;
   cin>>a>>b;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}

****************
Enter the values of a and b: 105 30
GCD of 105 and 30 is 15
****************
