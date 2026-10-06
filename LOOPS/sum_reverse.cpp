#include <iostream>
using namespace std;
int main()
{
    int n,sum,reverse,digits;
    cout<<"enter a number : ";
    cin>>n;
    reverse = 0;
    int original = n;
    sum = 0;
    while(n != 0)
    {
        digits = n % 10;
        reverse = reverse * 10 + digits;
        sum = sum + digits;
        n = n/10;
    }
    cout<<original+reverse<<endl;
}