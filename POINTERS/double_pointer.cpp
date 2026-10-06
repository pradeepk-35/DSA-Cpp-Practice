#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    // cout<<&ptr1<<endl<<ptr2;
    cout<<**ptr2;
}