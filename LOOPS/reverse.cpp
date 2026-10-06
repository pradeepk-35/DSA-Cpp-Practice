#include <iostream>
using namespace std;
int main()
{
    int n, digit;
    cout<< "Enter a number :";
    cin>> n;
    cout<<"the reversed number : ";
    n = abs(n);
    // while(n != 0)
    // {
    //     digit = n % 10;
    //     n = n / 10;
    //     cout<<digit;
    // }

    // using storing in variable method
    int reverse = 0;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout<<reverse;

}