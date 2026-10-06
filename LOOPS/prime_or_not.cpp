#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // int n;
    // n = 9;
    // for(int i = 2; i <= sqrt(n); i++)
    // {
    //     if(n % i == 0)
    //     {
    //         cout<<"composite";
    //         break;
    //     }
    //     else
    //     {
    //         cout<<"prime";
    //         break;
    //     }
    // }

    int a = 0, n, i;
    cout<<"Enter a number";
    cin>>n;
    for(i = 2; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
            a += 1;
    }
    if(n == 1 || n == 0 || n < 0)
        cout<<"Neither prime nor composite";
    else if(a >= 1)
        cout<<"composite";
    else
        cout<<"prime";
}
