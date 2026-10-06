#include <iostream>
using namespace std;
int a = 10;
int main()
{
    int a = 2;
    cout << a << endl;
    cout << ::a << endl; // Scope resolution operator...
    ::a += 10;
    cout << ::a << endl;
}