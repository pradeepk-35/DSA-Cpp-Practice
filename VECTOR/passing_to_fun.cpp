#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>& x) // pass by reference
{
    x[0] = 100;
}
int main()
{
    vector<int> a = {1,2,34,5};
    cout<<a[0]<<endl;
    display(a);
    cout<<a[0]<<endl;
}