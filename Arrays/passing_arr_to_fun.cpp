#include <iostream>
using namespace std;
// void change(int a[])
void change(int* a)
{
    a[4] = 100;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    change(arr);
    cout<<arr[3]<<endl;
    cout<<arr[4];
}