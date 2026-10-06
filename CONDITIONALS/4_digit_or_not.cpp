#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    if (abs(n) >= 1000 and abs(n) <= 9999)
    {
        cout << "it's a 4 digit number";
    }
    else
    {
        cout << "it's not a 4 digit number";
    }
}
