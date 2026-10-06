#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout<<"Enter a number :";
    cin>>n;
    a = 0;
    if(n == 0)
        cout<<"1 digit number";
    else 
    {
        while(n != 0)
        {
            n = n / 10;
            a += 1;
        }
    cout<<a<<" digit number";
    }
}