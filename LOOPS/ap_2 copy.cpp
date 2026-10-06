#include <iostream>
using namespace std;
int main()
{
    int i,n,a;
    cout<< "Enter the no of terms : ";
    cin>> n;
    a = 3;
    for(i = 1; i <= n ; i++)
    {
        cout<<a<<"\t";
        a += 4;
    }
}