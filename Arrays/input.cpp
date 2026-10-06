#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Negetive elements  in an array are : ";
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }

}