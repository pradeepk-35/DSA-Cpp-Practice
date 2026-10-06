#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 positive integers :";
    cin>>a>>b>>c;
    if(a + b > c && b + c > a && a + c > b)
        cout<<"it is a triangle";
    else 
        cout<<"it is not a triangle";
    return 0;
    
}