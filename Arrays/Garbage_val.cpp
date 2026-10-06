#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = sizeof(arr) / 4;
    for(int i  = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}