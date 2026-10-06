#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / 4;
    for(int i = 0; i <= n - 1; i++)
    {
        product *= arr[i];
    }
    cout<<product;
}