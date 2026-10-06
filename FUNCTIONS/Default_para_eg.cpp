#include <iostream>
using namespace std;
int power(int base , int expo = 2)
{
    int ans = 1;
    for(int i = 1; i <= expo; i++)
    {
        ans *= base;
    }
    return ans;
}
int main()
{
    int a1 = power(5);
    int a2 = power(5, 3);
    cout<<a1<<endl<<a2;
}