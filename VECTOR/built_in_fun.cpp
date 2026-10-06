#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    sort(v.begin() + 1, v.end() - 1);
    for (int ele : v)
        cout << ele << "  ";
}