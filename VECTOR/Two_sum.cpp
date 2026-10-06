#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// method 1 [brute force]
// void fun(vector<int> nums,int target)
// {
//     int n = nums.size();
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(nums[i] + nums[j] == target)
//             {    cout<<i<<" "<<j;
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     vector<int> nums = {1,2,3,4,5};
//     int target = 9;
//     fun(nums,target);
// }

// method 2
void fun1(vector<int> arr, int target1)
{
    int i = 0;
    int j = arr.size() - 1;
    while(i < j)
    {
        if(arr[i] + arr[j] == target1)
        {
            cout<<i<<" "<<j;
            break;
        }
        else if((arr[i] + arr[j]) > target1)
        {
            j--;
        }
        else
            i++;
    }
}
int main()
{
    vector<int> arr = {5,6,1,2,4,9};
    sort(arr.begin(), arr.end());
    // for(int ele : arr)
    // {
    // {
    // {
    //     cout<<ele<<" ";
    // }
    int target1 = 3;
    fun1(arr,target1);
}



