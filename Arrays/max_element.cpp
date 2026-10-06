#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // method 1
    // int max = INT_MIN;
    // int arr[] = {-100,-50,-1,-5,-6};
    // int n = sizeof(arr) / sizeof(int);
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr[i] > max)
    //         max = arr[i];
    //     else 
    //         continue;
    // }
    // cout<<max;

    // method 2
    int arr[] = { 100,2,3,4,5};
    int max = arr[0];
    int n = sizeof(arr) / sizeof(int) ;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
    }
    cout<<max;
}