Input:  "g  eeks   for ge  eeks  "
Output: "geeksforgeeks"
  
// An efficient C++ program to remove all spaces
// from a string
#include <iostream>
using namespace std;

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
	// To keep track of non-space character count
	int count = 0;

	// Traverse the given string. If current character
	// is not space, then place it at index 'count++'
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i]; // here count is
								// incremented
	str[count] = '\0';
}

// Driver program to test above function
int main()
{
	char str[] = "g eeks for ge eeks ";
	removeSpaces(str);
	cout << str;
	return 0;
}

****************************** faster ************************************

// CPP program to Remove spaces
// from a given string

#include <iostream>
#include <algorithm>
using namespace std;

// Function to remove all spaces from a given string
string removeSpaces(string str)
{
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

// Driver program to test above function
int main()
{
	string str = "g eeks for ge eeks ";
	str = removeSpaces(str);
	cout << str;
	return 0;
}

