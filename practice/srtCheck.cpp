#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool found = false;
    vector<int> v = {1, 2, 3, 6, 5, 4, 7};

    int n = v.size();
    if (n == 0 || n == 1)
    {
        cout << "Sorted";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Sorted";
        else
            cout << "Not Sorted";
    }
}