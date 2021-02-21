#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}

Output

Enter base number: 3
Enter power number(positive integer): 4
3^4 = 81
