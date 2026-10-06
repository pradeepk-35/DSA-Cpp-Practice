#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int mAx = INT_MIN;
    int smAx = INT_MIN;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > mAx)
            mAx = arr[i];
    }
    // cout<<mAx;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != mAx)
        {
            if(arr[i] > smAx)
                smAx = arr[i];
        }
    }
    cout<<smAx;
}