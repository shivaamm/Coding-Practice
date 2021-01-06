#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	string s;
	cin >> s;
	int n0 = 0;
	int n1 = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '0')
			n0++;
		else 
			n1++;
	}

	cout << n - 2*min(n0,n1) << endl;

}
