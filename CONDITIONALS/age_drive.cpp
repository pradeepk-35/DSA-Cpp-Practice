#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "eligeble to drive";
    }
    else
    {
        cout << "not eligeble to drive";
    }
    return 0;
}