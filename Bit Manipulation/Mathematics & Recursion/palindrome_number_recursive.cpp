// Recursive C++ program to check if the 
// number is palindrome or not 
#include <bits/stdc++.h> 
using namespace std; 

// recursive function that returns the reverse of digits 
int rev(int n, int temp) 
{ 
	// base case 
	if (n == 0) 
		return temp; 

	// stores the reverse of a number 
	temp = (temp * 10) + (n % 10); 

	return rev(n / 10, temp); 
} 

// Driver Code 
int main() 
{ 

	int n = 121; 
	
	int temp = rev(n, 0); 
	
	if (temp == n) 
		cout << "yes" << endl; 
	else
		cout << "no" << endl; 
	return 0; 
} 

*********************
Input : 121
Output : yes

Input : 532
Output : no
*********************
