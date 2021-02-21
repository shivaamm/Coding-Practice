VISUAL HELP - https://beginnersbook.com/wp-content/uploads/2017/08/Recursion_in_Cpp.jpg
Another visual help - https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-recursion-example.png

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

Enter an positive integer: 6
Factorial of 6 = 720
