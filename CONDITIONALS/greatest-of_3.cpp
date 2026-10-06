#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 positive integers";
    cin >> a >> b >> c;
    if (a == b && b == c && a == c)
        cout << "All three are equal";
    else if (a >= b && a >= c)
        cout << a << " is greatest";
    else if (b >= a && b >= c)
        cout << b << " is greatest";
    else
        cout << c << " is greatest";

    return 0;
}