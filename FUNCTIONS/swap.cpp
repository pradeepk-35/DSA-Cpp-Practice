#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int temp;
    // temp = a;
    // a = b;
    // b = temp;
    temp = b;
    b = a;
    a = temp;
    cout<<a<<" "<<b<<endl;
}