#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n % 5 == 0)
        cout<<"Divisible by 5";
    else
        cout<<"Not divisible by 5";
}