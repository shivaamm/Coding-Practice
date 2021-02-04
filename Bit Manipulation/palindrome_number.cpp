#include<iostream>
using namespace std;
void palindrome(int num) {
   int rev=0,val;
   val = num;
   while(num > 0) {
      rev = rev * 10 + num % 10;
      num = num / 10;
   }
   if(val==rev)
   cout<<val<<" is a palindrome"<<endl;
   else
   cout<<val<<" is not a palindrome"<<endl;
}
int main() {
   palindrome(12321);
   palindrome(1234);
   return 0;
}

Output

12321 is a palindrome
1234 is not a palindrome
