#include <iostream>
using namespace std;
int v = 0;
void count(int a)
{
    int Count = 0;
    while(a != 0)
    {
        a /= 10;
        Count++;
    }
    // ::v = Count;
    ::v = Count;
    //cout<<Count;
}
int main()
{
    cout<<"Enter a number :";
    int n;
    cin>>n;
    count(n);
    cout<<v;
}