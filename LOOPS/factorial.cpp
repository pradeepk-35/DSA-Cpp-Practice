#include <iostream>
using namespace std;
int main()
{
    long long fact, n, i;
    cout<<"Enter a number : ";
    cin>>n;
    fact = 1;
    i = 1;
    if(n < 0)
        cout<<"Factorial is not defined for negative integers";
    else 
        {
            while(i <= n)
            fact = fact * i;
            i++;
        }
        cout<<fact;
}