#include <iostream>
using namespace std;
void Add(int a, int b, int c)
{
    int sum = a + b + c;
    cout<<sum;
}
int main()
{
    int a, b, c;
    cout<<"Enter a number : ";
    cin>>a>>b>>c;
    Add(a, b, c);

}