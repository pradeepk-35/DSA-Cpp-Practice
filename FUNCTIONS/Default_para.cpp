#include <iostream>
using namespace std;
int display(int x = 18) // default parameter means simply intialising the value of a variable at the time of declaration to avoid errors in future
{
    return x;
}
int main()
{
    int age;
    int a = display();
    cout<<a;
}