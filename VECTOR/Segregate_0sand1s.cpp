#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr1 = {0, 1, 0, 1, 1, 0, 1, 0, 0, 0};
    // vector<int> arr2;
    // // int Min = 0;
    int n = arr1.size();
    // for (int i = 0; i < n; i++)
    // {        
    //     if (arr1[i] == 0)
    //     {
    //         arr2.push_back(arr1[i]);
    //     }
    // }
    // // int Max = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr1[i] == 1)
    //     {
    //         arr2.push_back(arr1[i]);
    //     }
    // }
    // for (int ele : arr2)
    // {
    //     cout << ele << " ";
    // }

    // METHOD 2;
    // int zero = 0, one = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr1[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else
    //     {
    //         one++;
    //     }
    // }
    // // cout<<zero<<endl<<one;
    // for(int i = 0; i < zero; i++)
    //     arr1[i] = 0;
    

    // for(int i = zero; i < n ; i++)
    //     arr1[i] = 1;
    // for(int ele : arr1)
    // {
    //     cout<<ele<<" ";
    // }

    int i = 0;
    int j = n - 1;
    while(i <= j)
    {
        if(arr1[i] == 0)
            i++;
        else if(arr1[j] == 1)
            j--;
        //if(arr1[i] != 0 && arr1[j] != 1)
        else
        {
            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
        }
    }
    for(int ele : arr1)
    {
        cout<<ele<<" ";
    }

}
