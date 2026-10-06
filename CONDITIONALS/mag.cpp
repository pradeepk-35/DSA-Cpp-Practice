#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number :";
    cin >> x;
    if (abs(x) < 69)
    {
        cout << "mag is lesser than 69";
    }
    else if (abs(x) == 69)
    {
        cout<<"equal to 69";
    }
    else
    {
        cout << "mag is greater than 69";
    }
}