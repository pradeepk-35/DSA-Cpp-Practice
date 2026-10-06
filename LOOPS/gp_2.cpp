#include <iostream>
using namespace std;
int main()
{
    int i, a, n;
    cout<<"Enter the terms : ";
    cin>>n;
    a = 1;
    for(i = 1; i <= n; i++)
    {
        cout<< a<< "\t";
        a *= 2;
    }
}