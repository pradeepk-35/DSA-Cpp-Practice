#include <iostream>
using namespace std;
int main()
{
    int n, i, a;
    cout<< "Enter a digits : ";
    cin>>n;
    i = 0;
    while(n != 0)
    {
        a = n % 10;
        i = i + a;
        n = n / 10;
    }
    cout<<"the sum of the given digits is : "<<i<<endl;
}