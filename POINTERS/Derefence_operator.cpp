#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // int* p1 = &a; // * - Dereference operator
    // cout<<*p1<<endl; // use *var to get thr value stored in the adress...
    int* x = &a;
    cout<<x;
}