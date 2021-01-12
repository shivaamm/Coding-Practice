/* C++ program to find the sum of all numbers present in the string */

#include <bits/stdc++.h>
using namespace std;
// Function to find the sum of all  numbers present in the string
int calculate_sum(string str)
{
	string temp = “”;   // intitialize temp
	int sum = 0;  // initialize sum
	for (char ch: str)   // traverse the characters one by one
	{
		if (isdigit(ch))  // if the character is a digit
			temp += ch;  // add that character to temp
		else
		{
			sum += atoi(temp.c_str());  // add it with sum
			temp = “”;
		}
	}
	return sum + atoi(temp.c_str());  // return the sum
}
int main()
{
	string str;
	cin >> str;  // input the string from the user.
	cout << calculate_sum(str);
	return 0;
}


// Enter the string : abc45def5ghi32
// 82
