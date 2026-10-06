#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 positive integers";
    cin>>a>>b>>c;
    if(a == b && b == c)
        cout<<"all are equal";
    
    else if(a <= b)
    {
        if(a<=c)
        {
            cout<<a<< " is least";
        }
        else
        {
            cout<<c<<" is least";
        }
    }
    else
    {
        if(b <= c)
        {
            cout<<b<<" is least";
        }
        else
        {
            cout<<c<<" is least";
        }
    }
    return 0;
}