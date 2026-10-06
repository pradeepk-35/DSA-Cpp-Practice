#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool flag = false;
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> arr = {1};
    int n = arr.size();
    if(n == 0 || n == 1) cout<<"Sorted";
    else {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag == false)
            cout << "Not Sorted";
        else
            cout << "Sorted";
    }

    
}