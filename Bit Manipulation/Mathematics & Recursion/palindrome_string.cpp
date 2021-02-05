#include <bits/stdc++.h>
using namespace std;
int palindrome_check(string s, int start, int end)
{
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return palindrome_check(s,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
   string s;
   cin>>s;
   int n=s.length();
   if(palindrome_check(s, 0, n-1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}

*****************
Input :racing
Output :No
****************

Time Complexity:
O(n) where n is the size of the string. Here we check the start and end of the string and update the values of start and end if char is the same at that position 
otherwise return 0.

Space Complexity
O(1) because we don’t create any auxiliary space here. Here we simply define one function and simply return the answer on the basis of the conditions.
