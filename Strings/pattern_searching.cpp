bool searchPattern(string str, string pat)
{
    if(str.find(pat) == string::npos){  // npos means "until the end of the string"
        return false; 
    }
    return true;
}

*********************************************************************************************
NPOS

Syntax:

static const size_t npos = -1;
Where, npos is constant static value with the highest possible value for an element of type size_t and it is defined with -1.

Below is the C++ program to illustrate the use of string::npos:


// C++ program to demonstrate the use
// of string::npos
#include <bits/stdc++.h>
using namespace std;

// Function that using string::npos
// to find the index of the occurrence
// of any string in the given string
void fun(string s1, string s2)
{
	// Find position of string s2
	int found = s1.find(s2);

	// Check if position is -1 pr not
	if (found != string::npos) {

		cout << "first " << s2
			<< " found at: "
			<< int(found) << endl;
	}

	else
		cout << s2 << " is not in"
			<< "the string" << endl;
}

// Driver Code
int main()
{
	// Given strings
	string s1 = "geeksforgeeks";
	string s2 = "for";
	string s3 = "no";

	// Function Call
	fun(s1, s2);

	return 0;
}

Output:
first for found at: 5
Explanation: In the above program string:npos constant is defined with a value of -1, because size_t is an unsigned integral type, 
and -1 is the largest possible representable value for this type.
