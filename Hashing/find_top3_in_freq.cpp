Input : arr[] = {3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3}
Output : Three largest elements are 3 16 15
Explanation :Here, 3 comes 4 times, 16 comes 3 times, 15 comes 3 times.

Input : arr[] = {2, 4, 3, 2, 3, 4, 5, 5, 3, 2, 2, 5}
Output : Three largest elements are 2 3 5


// C++ Program to Find the top three repeated numbers
#include <bits/stdc++.h>
using namespace std;

/* Function to print top three repeated numbers */
void top3Repeated(int arr[], int n)
{
	// There should be atleast two elements
	if (n < 3) {
		cout << "Invalid Input";
		return;
	}

	// Count Frequency of each element
	unordered_map<int, int> fre;
	for (int i = 0; i < n; i++)
		fre[arr[i]]++;

	// Initialize first value of each variable
	// of Pair type is INT_MIN
	pair<int, int> x, y, z;
	x.first = y.first = z.first = INT_MIN;

	for (auto curr : fre) {

		// If frequency of current element
		// is not zero and greater than
		// frequency of first largest element
		if (curr.second > x.first) {

			// Update second and third largest
			z = y;
			y = x;

			// Modify values of x Number
			x.first = curr.second;
			x.second = curr.first;
		}

		// If frequency of current element is
		// not zero and frequency of current
		// element is less than frequency of
		// first largest element, but greater
		// than y element
		else if (curr.second > y.first) {

			// Modify values of third largest
			z = y;

			// Modify values of second largest
			y.first = curr.second;
			y.second = curr.first;
		}

		// If frequency of current element
		// is not zero and frequency of
		// current element is less than
		// frequency of first element and
		// second largest, but greater than
		// third largest.
		else if (curr.second > z.first) {

			// Modify values of z Number
			z.first = curr.second;
			z.second = curr.first;
		}
	}

	cout << "Three largest elements are "
		<< x.second << " " << y.second
		<< " " << z.second;
}

// Driver's Code
int main()
{
	int arr[] = { 3, 4, 2, 3, 16, 3, 15,
				16, 15, 15, 16, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	top3Repeated(arr, n);
	return 0;
}

Output:
Three largest elements are 3 15 16
