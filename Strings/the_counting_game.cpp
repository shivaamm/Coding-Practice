#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i, j;
	cin >> T;
	string s;

	while(T--) {
	    cin >> s ;
	    
	    int count = 1;
	    
	    for(i=0; i<s.length(); i++) {
	    	if(s[i]<=90 && s[i]>=65) {
	    		count++;
			}
		}
		
		cout << count << endl;
	}
	return 0;
}
