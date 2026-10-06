#include <iostream>
using namespace std;
void fun(int *x)
{
    *x = 5;
}
int main()
{
    int a = 10;
    cout << a << endl;
    fun(&a);
    cout << a;
}