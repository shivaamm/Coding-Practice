#include <iostream>

using namespace std;
void fun1(int n);
void fun2(int n);
void fun1(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    fun2(n-2);
    cout<<n<<endl;
}
void fun2(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    fun1(++n);
    cout<<n<<endl;
}
int main()
{
    fun1(5);

    return 0;
}

OUTPUT
5 3 4 2 3 1 2 2 2 3 3 4 4 5
