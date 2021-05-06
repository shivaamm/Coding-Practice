// C++ code to find maximum shortest distance
// from endpoints
#include <bits/stdc++.h>
using namespace std;

// function to find maximum shortest distance
int find_maximum(int a[], int n, int k)
{
	// stores the shortest distance of every
	// element in original array.
	unordered_map<int, int> b;
	
	for (int i = 0; i < n; i++) {
		int x = a[i];
		
		// shortest distance from ends
		int d = min(1 + i, n - i);
		if (b.find(x) == b.end())
			b[x] = d;

		else

			/* if duplicates are found, b[x]
			is replaced with minimum of the
			previous and current position's
			shortest distance*/
			b[x] = min(d, b[x]);
	}
	
	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		int x = a[i];
		
		// similar elements ignore them
		// cause we need distinct elements	
		if (x != k - x && b.find(k - x) != b.end())		
			ans = min(max(b[x], b[k - x]), ans);		
	}
	return ans;
}

// driver code
int main()
{
	int a[] = { 3, 5, 8, 6, 7 };
	int K = 11;
	int n = sizeof(a) / sizeof(a[0]);
	cout << find_maximum(a, n, K) << endl;
	return 0;
}
