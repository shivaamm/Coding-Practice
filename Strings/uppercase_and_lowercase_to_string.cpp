For uppercase conversion
Input : s = "String"
Output : s = "STRING"

For lowercase conversion
Input : s = "String"
Output : s = "string"
  
// C++ program to convert whole string to
// uppercase or lowercase using STL.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// su is the string which is converted to uppercase
	string su = "Jatin Goyal";

	// using transform() function and ::toupper in STL
	transform(su.begin(), su.end(), su.begin(), ::toupper);
	cout << su << endl;

	// sl is the string which is converted to lowercase
	string sl = "Jatin Goyal";

	// using transform() function and ::tolower in STL
	transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
	cout << sl << endl;

	return 0;
}
