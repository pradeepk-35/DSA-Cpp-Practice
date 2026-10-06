#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the integer :";
    cin>>n;
    //cout<<"the absolute value of the given number is "<<abs(n);
    if(n<0)
    cout<<abs(n);
    else
    cout<<n;
}