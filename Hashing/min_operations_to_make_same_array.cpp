In this problem, we need to minimize the delete operations. The approach is simple, we count the frequency of each element in an array, 
then find the frequency of the most frequent elements in count array. Let this frequency be max_freq. 
To get the minimum number of elements to be deleted from the array calculate n – max_freq where n is a number of elements in the given array.



#include <bits/stdc++.h>
using namespace std;

// Function to get minimum number of elements to be deleted
// from array to make array elements equal
int minDelete(int arr[], int n)
{
	// Create an hash map and store frequencies of all
	// array elements in it using element as key and
	// frequency as value
	unordered_map<int, int> freq;
	for (int i = 0; i < n; i++)
		freq[arr[i]]++;

[[  	// Find maximum frequency among all frequencies.
	
	**************************************************************************************
	int max_freq = INT_MIN;
	for (auto itr = freq.begin(); itr != freq.end(); itr++)
		max_freq = max(max_freq, itr->second);
	
	*********************************** OR using this way also we can find max count ***************************************************
	
	    int max_count = 0;
	    for (auto i : hash)
		if (max_count < i.second)
		    max_count = i.second;	
	******************************************************************************       ]]

	// To minimize delete operations, we remove all
	// elements but the most frequent element.
	return n - max_freq;
}

// Driver program to run the case
int main()
{
	int arr[] = { 4, 3, 4, 4, 2, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minDelete(arr, n);
	return 0;
}
