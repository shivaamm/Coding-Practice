Maths Logic ques

// C++ program to count 
// trailing 0s in n! 
#include <iostream> 
using namespace std; 

// Function to return trailing 
// 0s in factorial of n 
int findTrailingZeros(int n) 
{ 
	// Initialize result 
	int count = 0; 

	// Keep dividing n by powers of 
	// 5 and update count 
	for (int i = 5; n / i >= 1; i *= 5) 
		count += n / i; 

	return count; 
} 

// Driver Code 
int main() 
{ 
	int n = 100; 
	cout << "Count of trailing 0s in " << 100 
		<< "! is " << findTrailingZeros(n); 
	return 0; 
} 
