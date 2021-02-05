Input: arr[] = {3, 6, 0, 6, 3}
Output: Palindrome

Input: arr[] = {1, 2, 3, 4, 5}
Output: Not Palindrome

***********************
Approach:

Get the reverse of the Array using reverse() method, provided in STL.
Initialise flag to unset int flag = 0.
Loop the array till size n and check if the original array and the reversed array are same. If not set flag = 1
After the loop has ended, If flag is set the print “Not Palindrome” else print “Palindrome”

***********************


// C++ program to check if an Array 
// is Palindrome or not using STL 

#include <bits/stdc++.h> 
using namespace std; 

void palindrome(int arr[], int n) 
{ 
	// Initialise flag to zero. 
	int flag = 0; 

	// Create another array 
	// to store the original array 
	int arr2[n]; 
	memcpy(arr2, arr, n * sizeof(int)); 

	// Reverse the array 
	reverse(arr, arr + n); 

	// Check if the array is Palindrome 
	for (int i = 0; i < n; i++) 
		if (arr[i] != arr2[i]) { 
			flag = 1; 
			break; 
		} 

	// Print the result 
	if (flag == 0) 
		cout << "Palindrome\n"; 
	else
		cout << "Not Palindrome\n"; 
} 

int main() 
{ 
	// Get the array 
	int arr[] = { 1, 2, 3, 2, 1 }; 

	// Compute the size 
	int n = sizeof(arr) / sizeof(arr[0]); 

	palindrome(arr, n); 

	return 0; 
} 
