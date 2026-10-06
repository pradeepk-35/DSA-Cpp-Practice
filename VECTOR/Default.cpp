#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(4, 5);
    int n = arr.size();
    // cout<<n;
    // int n = sizeof(arr) ; sizeof(int);
    //  cout<<n;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    arr.push_back(10);
    arr.pop_back();
    arr.push_back(20);
    arr.pop_back();
    arr.push_back(100);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}