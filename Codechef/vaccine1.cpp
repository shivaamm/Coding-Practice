https://www.codechef.com/submit/VACCINE1
 Problem Code:VACCINE1 

#include <bits/stdc++.h>
using namespace std;

int main()
{

int D1, V1, D2, V2, P;
cin >> D1 >> V1 >> D2 >> V2 >> P;

if (D1 > D2)
{
	swap(D1, D2);
	swap(V1, V2);
}

int d = (P / V1) + (P % V1 > 0) + D1 - 1;

if (d < D2)
	cout << d << endl;
else
{
	int num = P + (D1 - 1) * V1 + (D2 - 1) * V2;
	int den = V1 + V2;
	d = (num / den) + (num % den > 0);
	cout << d << endl;
}

return 0;

}
