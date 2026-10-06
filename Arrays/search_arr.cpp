#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr) / sizeof(int);
    // int count = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr[i] == 3)
    //     {
    //         count++;
    //     } 
    // }
    // if(count != 0)
    //     cout<<"Element found";
    // else 
    //     cout<<"Element not found";

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int count = 10;
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == count)
        {
            flag = true;
            break;
        }
       
    }
    if(flag == true)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}
