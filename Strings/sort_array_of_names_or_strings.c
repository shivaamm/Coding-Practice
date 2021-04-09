#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining comparator function as per the requirement
static int myCompare(const void* a, const void* b)
{

	// setting up rules for comparison
	return strcmp(*(const char**)a, *(const char**)b);
}

// Function to sort the array
void sort(const char* arr[], int n)
{
	// calling qsort function to sort the array
	// with the help of Comparator
	qsort(arr, n, sizeof(const char*), myCompare);
}

int main()
{

	// Get the array of names to be sorted
	const char* arr[]
		= { "geeksforgeeks", "geeksquiz", "clanguage" };

	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	// Print the given names
	printf("Given array is\n");
	for (i = 0; i < n; i++)
		printf("%d: %s \n", i, arr[i]);

	// Sort the given names
	sort(arr, n);

	// Print the sorted names
	printf("\nSorted array is\n");
	for (i = 0; i < n; i++)
		printf("%d: %s \n", i, arr[i]);

	return 0;
}

Output:
Given array is
0: geeksforgeeks 
1: geeksquiz 
2: clanguage 

Sorted array is
0: clanguage 
1: geeksforgeeks 
2: geeksquiz
