#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr) / 4;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //  for(int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
}