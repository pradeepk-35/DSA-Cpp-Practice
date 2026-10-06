#include <iostream>
using namespace std;
int main()
{
    int a, n, i;
    cout<<"Enter the no of terms : ";
    cin>>n;
    a = 1;
    for(i = 1; i <= n; i++)
    {
        cout<<a<<"\t";
        a *= 2;
    }
}