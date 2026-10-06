#include <iostream>
using namespace std;
int main()
{
    int i,a,n;
    cout<<"Enter the number of the terms : ";
    cin>>n;
    a = 99;
    for(i = 1; i <= n; i++)
    {
        cout<<a<<"\t";
        a -= 4;
    }
}
