#include <iostream>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "Enter the principle amount ";
    cin >> p;
    cout << "Enter the rate ";
    cin >> r;
    cout << "Enter the time ";
    cin >> t;
    si = (p * t * r) / 100.0;
    cout << "The simple intrest is >>" << si;
    return 0;
}