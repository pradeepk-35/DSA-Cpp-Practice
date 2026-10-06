#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number :";
    cin>> n;
    if(n % 3 == 0 || n % 5 == 0)
    {
        cout<< n << " is divisible by 5 or 3";
    }
    else
    {
        cout<< n << "  is not divisible by 5 or 3";
    }
    return 0;
}
