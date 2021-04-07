// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}

************************************************************************

// A quickly written program for reversing a string
// using reverse()
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "geeksforgeeks";

	// Reverse str[begin..end]
	reverse(str.begin(), str.end());

	cout << str;
	return 0;
}

**************************************************************************

Reverse string using the constructor : Passing reverse iterators to the constructor returns us a reversed string.

// A simple C++ program to reverse string using constructor 
#include <bits/stdc++.h> 
using namespace std; 
int main(){
  
    string str = "GeeksforGeeks";
  
    //Use of reverse iterators
    string rev = string(str.rbegin(),str.rend());    //used here "r"
  
    cout<<rev<<endl; 
    return 0;
}
Output:

skeeGrofskeeG
