#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k1,k2;
	    cin>>n>>k1>>k2;
	    int w,b;
	    cin>>w>>b;
	    
	    int canw = (k1 + k2) / 2;
        int canb = (n - k1 + n - k2) / 2;
        if (w <= canw && b <= canb)
            cout << "YES\n";
        else
            cout << "NO\n";
	    
	}
	return 0;
}

**********************************************************
if(2 * W <= (U+D) && 2 * B <= (N+N - U - D))
				cout << "Yes\n";
		else cout << "No\n";
**********************************************************
